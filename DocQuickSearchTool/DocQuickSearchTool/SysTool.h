#include "Common.h"
#include "./sqlite3/sqlite3.h"
#pragma comment(lib, "./sqlite3/sqlite3.lib")
void DirectoryList(string &path, vector<string>&subdir, vector<string>&subfile);

void TestSqlite();