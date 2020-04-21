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

void TestSerach()
{
	ScanManager &smg = ScanManager::GetScanManagerInstance("D:\\搜狗高速下载\\test");//只创建一个扫描实例
	smg.ScanDirectory("D:\\搜狗高速下载\\test");
	DataManager &dmg = DataManager::GetDataManagerInstance();//只创建一个数据库管理实例
	string name = "爱情公寓"; 
	vector<pair<string, string>>v;
	dmg.Search(name,v);
	for (const auto&e : v)
	{
		cout << e.first << "           " << e.second << endl;
	}
}
void TestColor()
{
	char*str = "hello";
	cout << "world";
	ColourPrintf(str);
}

void TestJieMain()
{
	while (1)
	{
		string name;
		string path = "D:\\搜狗高速下载\\test";
		cout << "请输入:";
		cin >> name;
		ScanManager& sm = ScanManager::GetScanManagerInstance(path);
		sm.ScanDirectory(path);
		DataManager& dm = DataManager::GetDataManagerInstance();
		vector<pair<string, string>>v;
		dm.Search(name,v);
		printf("%-30s %-50s\n","名字","路径");
		for (const auto&e : v)
		{
			printf("%-30s %-50s\n",e.first.c_str(),e.second.c_str());
		}
	}
}

void TestHighLight()
{
	DataManager&dm = DataManager::GetDataManagerInstance();
	string str = "123比特科技XyZ,文档快速搜索神器，HaLo6666";
	string key = "wdks";
	string prefix, highlight, suffix;
	dm.HighLight(str,key,prefix,highlight,suffix);
	cout << prefix;
	ColourPrintf(highlight.c_str());
	cout << suffix << endl;
}
int main()
{
	//TestSqlite();
	//TestScanManager();
	//TestDataManager();
	//TestScanManager();
	//TestSerach();
	//TestPinyin();
	//TestColor();
	//TestJieMian();
	//TestJieMain();
	TestHighLight();
	return 0;

}
