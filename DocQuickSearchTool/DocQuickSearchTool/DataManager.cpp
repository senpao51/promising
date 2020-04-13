#include "DataManager.h"
#include "SysTool.h"

SqliteManager::SqliteManager() :db(nullptr)
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
	int rc = sqlite3_close(db);
	if (rc != SQLITE_OK)
	{
		ERROR_LOG("Close Database Failed.%s",sqlite3_errmsg(db));
		return;
	}
	else
	{
		TRACE_LOG("Close Database Successfully.");
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


#define DEFAULT_DB "my_db"
#define DEFAULT_TABLE "my_table"
DataManager::DataManager()
{
	smg.Open(DEFAULT_DB);
}
DataManager::~DataManager()
{}
void DataManager::InitSqlite()
{
	char sql[DEFAULT_SQL_SIZE] = { 0 };
	sprintf(sql, "create table if no exists %s(id integer primary key autoincrement,name varchar(32),path varchar(256));",DEFAULT_TABLE);
	////////////"create table test_table(id int primamy key auto_increment,name varchar(20),path varchar(100));"
	smg.SqliteExec(sql);
}
void DataManager::InsertDoc(const string& path, const string&doc)
{
	char sql[DEFAULT_SQL_SIZE] = { 0 };
	sprintf(sql, "insert into %s values(null,%s,%s);",DEFAULT_TABLE,doc.c_str(),path.c_str());
	smg.SqliteExec(sql);
}
void DataManager::DeleteDoc(const string& path, const string&doc)
{
	char sql[DEFAULT_SQL_SIZE] = { 0 };
	sprintf(sql,"delete from %s where name = %s and path = %s",DEFAULT_TABLE,doc.c_str(),path.c_str());
	smg.SqliteExec(sql);
}
void DataManager::GetDocInfo(const string&path, set<string>&sql_set)
{
	char sql[DEFAULT_SQL_SIZE] = { 0 };
	sprintf(sql,"select name from %s where path = %s",DEFAULT_TABLE,path.c_str());
	int row = 0, col = 0;
	char**result = nullptr;
	smg.GetSqliteTable(sql,result,row,col);
	for (int i = 1; i <= row; i++)
		sql_set.insert(result[i]);
	sqlite3_free_table(result);
}