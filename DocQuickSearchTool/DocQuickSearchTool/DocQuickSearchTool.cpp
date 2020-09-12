#include "Common.h"
#include "DataManager.h"
#include "SysTool.h"
#include "ScanManager.h"

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

