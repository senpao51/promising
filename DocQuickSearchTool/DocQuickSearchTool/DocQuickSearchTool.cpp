#include "Common.h"
#include "DataManager.h"
#include "SysTool.h"
#include "ScanManager.h"
void TestSqlite()
{
	SqliteManager sm;
	string path = "test.db";
	sm.Open(path);
	string table_db = "create table test_table(id int primamy key auto_increment,name varchar(20),path varchar(100));";
	sm.SqliteExec(table_db);
	string s1 = "insert into test_table values(1,'sql.pdf','c:\'),(2,'c++.pdf','d:\'),(3,'ok.pdf','e:\');";
	sm.SqliteExec(s1);
	char **result = nullptr;
	int row = 0, col = 0;
	string select = "select * from test_table";
	sm.GetSqliteTable(select, result, row, col);
	for (int i = 0; i < row*col+col; i++)
	{
		printf("%-15s",result[i]);
		if ((i + 1) % col == 0)
			printf("\n");
	}
	sqlite3_free_table(result);
}

void TestDataManager()
{
	DataManager dmg;
	dmg.InitSqlite();
	string path = "c:";
	string name = "stl.pdf";
	dmg.InsertDoc(path,name);
	string path1 = "c:";
	string name1 = "c++.pdf";
	dmg.InsertDoc(path1, name1);
	string path2 = "c:";
	string name2 = "linux.pdf";
	dmg.InsertDoc(path2, name2);
	set<string>sql_set;
	dmg.GetDocInfo(path,sql_set);
	for (const auto&e : sql_set)
		cout << e << "   ";
	cout << endl;
	//dmg.DeleteDoc(path,name);
}
void TestScanManager()
{
	ScanManager smg;
	smg.ScanDirectory("D:\\ËÑ¹·¸ßËÙÏÂÔØ\\test");
}
int main()
{
	//TestSqlite();
	//TestScanManager();
	//TestDataManager();
	TestScanManager();
	return 0;
}
