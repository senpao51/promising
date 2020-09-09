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
	ScanManager &smg = ScanManager::GetScanManagerInstance("D:\\�ѹ���������\\test");//ֻ����һ��ɨ��ʵ��
	smg.ScanDirectory("D:\\�ѹ���������\\test");
	DataManager &dmg = DataManager::GetDataManagerInstance();//ֻ����һ�����ݿ����ʵ��
	string name = "���鹫Ԣ"; 
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
		string path = "D:\\�ѹ���������\\test";
		cout << "������:";
		cin >> name;
		ScanManager& sm = ScanManager::GetScanManagerInstance(path);
		sm.ScanDirectory(path);
		DataManager& dm = DataManager::GetDataManagerInstance();
		vector<pair<string, string>>v;
		dm.Search(name,v);
		printf("%-30s %-50s\n","����","·��");
		for (const auto&e : v)
		{
			printf("%-30s %-50s\n",e.first.c_str(),e.second.c_str());
		}
	}
}

void TestHighLight()
{
	DataManager&dm = DataManager::GetDataManagerInstance();
	string str = "123���ؿƼ�XyZ,�ĵ���������������HaLo6666";
	string key = "wdks";
	string prefix, highlight, suffix;
	dm.HighLight(str,key,prefix,highlight,suffix);
	cout << prefix;
	ColourPrintf(highlight.c_str());
	cout << suffix << endl;
}
void Test(vector<string>&path)
{
	TCHAR szBuf[100];
	memset(szBuf, 0, 100);
	DWORD len = GetLogicalDriveStrings(sizeof(szBuf) / sizeof(TCHAR), szBuf);
	for (TCHAR * s = szBuf; *s; s +=strlen(s) + 1)
	{
		LPCTSTR sDrivePath = s;
		path.push_back(s);
	}
	Sleep(2000);
}

void menu()
{
	printf("****************************************************************************************************************************************************************");
	printf("***                                                                                   1.��ѯ                                                                 ***");
	printf("***                                                                                   0.exit                                                                 ***");
	printf("****************************************************************************************************************************************************************");
}
void DiskMod()//����ģ��
{
	vector<string>Disk;
	//GetAllDisk(Disk);
	string path = "E:";
	cout << "���Եȣ����ڼ����ļ�:)" << endl;
	ScanManager& sm = ScanManager::GetScanManagerInstance(path);
	sm.ScanDirectory(path);
	DataManager& dm = DataManager::GetDataManagerInstance();
	string name;
	cout << "������:";
	cin >> name;
	vector<pair<string, string>>v;
	dm.Search(name, v);
	printf("%-78s %-78s\n", "����", "·��");
	for (const auto&e : v)
	{
		printf("%-78s %-78s\n", e.first.c_str(), e.second.c_str());
	}
	printf("\n");
}

int main()
{
	while (1)
	{
		bool flag = false;
		int input;
		menu();
		cout << "��ѡ��:";
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			DiskMod();
			break;
		case 0:
			flag = true;
			break;
		default:
			{
				cout << "�������,��������˳�" << endl;
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	return 0;
}

