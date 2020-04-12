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
	if (rc != SQLITE_OK)
	{
		TRACE_LOG("create database failed,%s",sqlite3);
	}

}
void SqliteManager::Close()
{
	sqlite3_close(db);
}
void ::SqliteExec(const string&sql)
{}
void ::GetSqliteTable(const string&sql, char**&result, int&row, int&col)
{}