#include "ScanManager.h"
#include "SysTool.h"


void ScanManager::StartScan(const string& path)
{
	while (1)
	{
		this_thread::sleep_for(chrono::seconds(3));//隔3秒进行扫描
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
	set<string>local_set;//本地文件的集合
	local_set.insert(subdir.begin(),subdir.end());
	local_set.insert(subfile.begin(),subfile.end());
	set<string>sql_set;//数据库文件的集合
	DataManager &dm = DataManager::GetDataManagerInstance();
	dm.GetDocInfo(path.c_str(), sql_set);
	auto local_it = local_set.begin();
	auto sql_it = sql_set.begin();
	while (local_it != local_set.end() && sql_it != sql_set.end())
	{
		if (*local_it < *sql_it)
		{
			//本地有，数据库没有，需要添加，最后local_it++;
			dm.InsertDoc(path.c_str(),*local_it);
			local_it++;
		}
		else if (*local_it>*sql_it)
		{
			//本地没有，数据库有，需要删除,最后sql_it++;
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
		//数据库还需增加文件
		dm.InsertDoc(path.c_str(),*local_it);
		local_it++;
	}
	while (sql_it != sql_set.end())
	{
		//数据库还需删除文件
		dm.DeleteDoc(path.c_str(),*sql_it);
		sql_it++;
	}
	
	//递归遍历子目录
	if (subdir.size() > 0)
	{
		//D:\\搜狗高速下载\\test
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
