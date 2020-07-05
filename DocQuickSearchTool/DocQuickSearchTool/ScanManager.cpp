#include "ScanManager.h"
#include "SysTool.h"


void ScanManager::StartScan(const string& path)
{
	while (1)
	{
		this_thread::sleep_for(chrono::seconds(3));//��3�����ɨ��
		ScanDirectory(path);
	}
}
ScanManager& ScanManager::GetScanManagerInstance(const string&path)
{
	static ScanManager smg;
	thread scan_inst(&StartScan,&smg,path);
	scan_inst.detach();
	return smg;
}
ScanManager::ScanManager()
{}
void ScanManager::ScanDirectory(const string &path)
{
	vector<string>subfile;
	vector<string>subdir;
	DirectoryAdd(path,subdir,subfile);
	set<string>local_set;//�����ļ��ļ���
	local_set.insert(subdir.begin(),subdir.end());
	local_set.insert(subfile.begin(),subfile.end());
	set<string>sql_set;//���ݿ��ļ��ļ���
	DataManager &dm = DataManager::GetDataManagerInstance();
	dm.GetDocInfo(path.c_str(), sql_set);
	auto local_it = local_set.begin();
	auto sql_it = sql_set.begin();
	while (local_it != local_set.end() && sql_it != sql_set.end())
	{
		if (*local_it < *sql_it)
		{
			//�����У����ݿ�û�У���Ҫ��ӣ����local_it++;
			dm.InsertDoc(path.c_str(),*local_it);
			local_it++;
		}
		else if (*local_it>*sql_it)
		{
			//����û�У����ݿ��У���Ҫɾ��,���sql_it++;
			dm.DeleteDoc(path.c_str(),*sql_it);
			sql_it++;
		}
		else
		{
			local_it++;
			sql_it++;
		}
	}
	while(local_it != local_set.end())
	{
		//���ݿ⻹�������ļ�
		dm.InsertDoc(path.c_str(),*local_it);
		local_it++;
	}
	while (sql_it != sql_set.end())
	{
		//���ݿ⻹��ɾ���ļ�
		dm.DeleteDoc(path.c_str(),*sql_it);
		sql_it++;
	}
	
	//�ݹ������Ŀ¼
	if (subdir.size() > 0)
	{
		//D:\\�ѹ���������\\test
		string tmp = path;
		for (int i = 0; i < subdir.size(); i++)
		{
			tmp += "\\";
			tmp += subdir[i];
			ScanDirectory(tmp);
			tmp = path;
		}
	}
}
