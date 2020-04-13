#include "Common.h"
#include "DataManager.h"
#include "SysTool.h"
#include "ScanManager.h"
void TestSqlite()
{
	SqliteManager sm;
	string path = "test.db";
	sm.Open(path);
	//string table_db = "create table test_table(id int primamy key auto_increment,name varchar(20),path varchar(100));";
	//sm.SqliteExec(table_db);
	//string s1 = "insert into test_table values(1,'sql.pdf','c:\'),(2,'c++.pdf','d:\'),(3,'ok.pdf','e:\');";
	//sm.SqliteExec(s1);
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
void TestScanManager()
{
	ScanManager smg;
	smg.ScanDirectory("D:\\�ѹ���������\\test");
}
void TestDataManager()
{
	DataManager dmg;
	dmg.InitSqlite();
}
int main()
{
	//TestSqlite();
	//TestScanManager();
	TestDataManager();
	return 0;
}
