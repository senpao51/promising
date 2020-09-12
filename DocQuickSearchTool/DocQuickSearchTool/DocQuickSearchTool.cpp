#include "Common.h"
#include "DataManager.h"
#include "SysTool.h"
#include "ScanManager.h"

void menu()
{
	printf("****************************************************************************************************************************************************************");
	printf("***                                                                                   1.查询                                                                 ***");
	printf("***                                                                                   0.exit                                                                 ***");
	printf("****************************************************************************************************************************************************************");
}
void DiskMod()//磁盘模块
{
	vector<string>Disk;
	//GetAllDisk(Disk);
	string path = "E:";
	cout << "请稍等，正在加载文件:)" << endl;
	ScanManager& sm = ScanManager::GetScanManagerInstance(path);
	sm.ScanDirectory(path);
	DataManager& dm = DataManager::GetDataManagerInstance();
	string name;
	cout << "请输入:";
	cin >> name;
	vector<pair<string, string>>v;
	dm.Search(name, v);
	printf("%-78s %-78s\n", "名字", "路径");
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
		cout << "请选择:";
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
				cout << "输入错误,按任意键退出" << endl;
				flag = true;
				break;
			}
		}
		if (flag)
			break;
	}
	return 0;
}

