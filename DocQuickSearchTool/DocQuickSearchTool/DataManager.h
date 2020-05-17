#pragma once 
#include "Common.h"
class SqliteManager//数据库操作(打开，关闭，插入，查询，数据库语句的操作)
{
public:
	SqliteManager();
	~SqliteManager();
public:
	void Open(const string &path);
	void Close();
	void SqliteExec(const string&sql);
	void GetSqliteTable(const string&sql, char**&result, int&row, int&col);
private:
	sqlite3*db;
};


////////////////////////////////////////////////////////////////////////
#define DEFAULT_DB "mytest.db"
#define DEFAULT_TABLE "mytable"
class DataManager//对数据库的成员管理
{
public:
	~DataManager();
public:
	void InitSqlite();
	void InsertDoc(const string& path,const string&doc);
	void DeleteDoc(const string& path,const string&doc);
	void GetDocInfo(const string&path, set<string>&sql_set);
	void Search(const string&key,vector<pair<string,string>>&SeaRes);
	static DataManager& GetDataManagerInstance();
	void HighLight(const string& str,const string& key,string& prefix,string& highlight,string& suffix);
private:
	DataManager();
private:
	SqliteManager smg;
};



/////////////////////////////////////////////////////////////////////////////
class AutoGetTableResult
{
public:
	AutoGetTableResult(SqliteManager* m_smg, const string&sql, int&row, int&col, char**&result);
	~AutoGetTableResult();
private:
	SqliteManager* smg;
	char** m_result;
};
