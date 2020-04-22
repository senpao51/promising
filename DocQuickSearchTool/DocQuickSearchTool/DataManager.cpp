#include "DataManager.h"
#include "SysTool.h"

SqliteManager::SqliteManager():db(nullptr)
{}

SqliteManager::~SqliteManager()
{
	Close();
}
void SqliteManager::Open(const string &path)
{
	int rc = sqlite3_open(path.c_str(),&db);
	if (rc!=SQLITE_OK)//SQLITE_OK 表示0，sqlite3_open成功返回0，失败返回非0
	{
		ERROR_LOG("Create Database Failed.%s",sqlite3_errmsg(db));
		return;
	}
	else
	{
		TRACE_LOG("Create DataBase Successfully.");
	}
}
void SqliteManager::Close()
{
	if (db)
	{
		int rc = sqlite3_close(db);
		if (rc != SQLITE_OK)
		{
			ERROR_LOG("Close Database Failed.%s", sqlite3_errmsg(db));
			return;
		}
		else
		{
			TRACE_LOG("Close Database Successfully.");
		}
	}
}
void SqliteManager::SqliteExec(const string&sql)
{
	char*errmsg = nullptr;
	int rc = sqlite3_exec(db,sql.c_str(),0,0,&errmsg);
	if (rc != SQLITE_OK)
	{
		ERROR_LOG("Sql(%s) Failed.%s", sql.c_str(),sqlite3_errmsg(db));
		return;
	}
	else
	{
		TRACE_LOG("Sql(%s) Successfully",sql.c_str());
	}
}
void SqliteManager::GetSqliteTable(const string&sql, char**&result, int&row, int&col)
{
	char*errmsg = nullptr;
	int rc = sqlite3_get_table(db,sql.c_str(),&result,&row,&col,&errmsg);
	if (rc != SQLITE_OK)
	{
		ERROR_LOG("Get Table Result Failed.%s",sqlite3_errmsg(db));
		return;
	}
	else
	{
		TRACE_LOG("Get Table Result Successfully");
	}
}


///////////////////////////////////////////////////////////////////




DataManager& DataManager::GetDataManagerInstance()
{
	static DataManager dm_inst;
	return dm_inst;
}
DataManager::DataManager()
{
	smg.Open(DEFAULT_DB);
	InitSqlite();
}
DataManager::~DataManager()
{}
void DataManager::InitSqlite()
{
	char sql[DEFAULT_SQL_SIZE] = { 0 };
	sprintf(sql, "create table if not exists %s(id integer primary key autoincrement,name varchar(128),path varchar(255),pinyin varchar(32),initials varchar(32));",DEFAULT_TABLE);
	/////////////"create table test_table(id int primamy key auto_increment,name varchar(20),path varchar(100));"
	////////////"create table test_table(id int primamy key auto_increment,name varchar(20),path varchar(100));"
	smg.SqliteExec(sql);
}
void DataManager::InsertDoc(const string& path, const string&doc)
{
	char sql[DEFAULT_SQL_SIZE] = { 0 };
	string pinyin = ChineseConvertPinYin(doc);
	string initials = ChineseConvertInitials(doc);
	sprintf(sql, "insert into %s values(null,'%s','%s','%s','%s');",DEFAULT_TABLE,doc.c_str(),path.c_str(),pinyin.c_str(),initials.c_str());
	smg.SqliteExec(sql);
}
void DataManager::DeleteDoc(const string& path, const string&doc)
{
	char sql[DEFAULT_SQL_SIZE] = { 0 };
	sprintf(sql,"delete from %s where name = '%s' and path = '%s'",DEFAULT_TABLE,doc.c_str(),path.c_str());
	smg.SqliteExec(sql);
	//模糊删除目录下的子文件
	string doc_path = path; //D:\搜狗高速下载\test
	doc_path += "\\"; 
	doc_path += doc; //D:\搜狗高速下载\test\\dir1_dir1
	memset(sql,0,DEFAULT_SQL_SIZE);
	sprintf(sql,"delete from %s where path like '%s%%'",DEFAULT_TABLE,doc_path.c_str());
	smg.SqliteExec(sql);
}
void DataManager::GetDocInfo(const string&path, set<string>&sql_set)
{
	char sql[DEFAULT_SQL_SIZE] = { 0 };
	sprintf(sql,"select name from %s where path = '%s'",DEFAULT_TABLE,path.c_str());
	int row = 0, col = 0;
	char**result = nullptr;
	AutoGetTableResult at(&smg,sql,row,col,result);
	for (int i = 1; i <= row; i++)
		sql_set.insert(result[i]);
}

void DataManager::Search(const string&key, vector<pair<string, string>>&SeaRes)
{
	char sql[DEFAULT_SQL_SIZE] = { 0 };
	string pinyin = ChineseConvertPinYin(key);
	string initials = ChineseConvertInitials(key);
	sprintf(sql, "select name,path from %s where pinyin like '%%%s%%' or initials like '%%%s%%'", DEFAULT_TABLE,pinyin.c_str(),initials.c_str());
	char**result = nullptr;
	SeaRes.clear();
	int row = 0, col = 0;
	AutoGetTableResult at(&smg, sql, row, col, result);;
	for (int i = 1; i <= row; i++)
	{
		SeaRes.push_back(make_pair(result[i*col],result[i*col+1]));
	}
}
void DataManager::HighLight(const string& str, const string& key, string& prefix, string& highlight, string& suffix)
{
	string strlower = str;
	string keylower = key;
	transform(strlower.begin(),strlower.end(),strlower.begin(),tolower);
	transform(keylower.begin(),keylower.end(),keylower.begin(),tolower);
	size_t pos = strlower.find(keylower);
	if (pos != string::npos)
	{
		prefix = str.substr(0,pos);//substr(size_t pos,size_t len)从pos位置分割len个字符。
		highlight = str.substr(pos,keylower.size());
		suffix = str.substr(pos+keylower.size());
		return;
	}
	//根据拼音搜索
	string str_pinyin = ChineseConvertPinYin(strlower);
	string key_pinyin = ChineseConvertPinYin(keylower);
	pos = str_pinyin.find(key_pinyin);
	if (pos != string::npos)
	{
		size_t str_index = 0;
		size_t pinyin_index = 0;
		size_t highlight_index = 0;
		size_t highlight_len = 0;
		while (str_index < strlower.size())
		{
			if (pos == pinyin_index)
			{
				highlight_index = str_index;
			}
			if (pinyin_index >= pos + key_pinyin.size())
			{
				highlight_len = str_index - highlight_index;
				break;
			}
			if (strlower[str_index] >= 0 && strlower[str_index] <= 127)
			{
				str_index++;
				pinyin_index++;
			}
			else
			{
				string word(strlower,str_index,2);
				string word_pinyin = ChineseConvertPinYin(word);
				str_index += 2;
				pinyin_index += word_pinyin.size();
			}
		}
		prefix = str.substr(0,highlight_index);
		highlight = str.substr(highlight_index,highlight_len);
		suffix = str.substr(highlight_index+highlight_len,string::npos);
		return;
	}
	string str_initials = ChineseConvertInitials(str);
	string key_initials = ChineseConvertInitials(key);
	pos = str_initials.find(key_initials);
	if (pos != string::npos)
	{
		size_t str_index = 0;
		size_t initials_index = 0;
		size_t highlight_index = 0;
		size_t highlight_len = 0;
		while (str_index < strlower.size())
		{
			if (pos == initials_index)
			{
				highlight_index = str_index;
			}
			if (initials_index >= pos + key_initials.size())
			{
				highlight_len = str_index - highlight_index;
				break;
			}
			if (strlower[str_index] >= 0 && strlower[str_index] <= 127)
			{
				str_index++;
				initials_index++;
			}
			else
			{
				str_index += 2;
				initials_index++;
			}
		}
		prefix = str.substr(0, highlight_index);
		highlight = str.substr(highlight_index, highlight_len);
		suffix = str.substr(highlight_index + highlight_len, string::npos);
		return;
	}
	suffix = str;
}




//////////////////////////////////////////////////////////////
AutoGetTableResult::AutoGetTableResult(SqliteManager* m_smg, const string&sql, int&row, int&col, char**&result) :smg(m_smg)
{
	smg->GetSqliteTable(sql, result, row, col);
	m_result = result;
}
AutoGetTableResult::~AutoGetTableResult()
{
	if (m_result)
	{
		sqlite3_free_table(m_result);
	}
}