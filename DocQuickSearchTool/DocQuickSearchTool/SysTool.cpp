#include "SysTool.h"
void DirectoryAdd(const string &path, vector<string>&subdir, vector<string>&subfile)//目录下所有文件的展示
{
	string _path = path;
	_path += "\\*.*";
	_finddata_t filedata;
	long handle = _findfirst(_path.c_str(),&filedata);
	if (handle == -1)
	{
		perror("_findfirst");
		return;
	}
	do
	{
		if (strcmp(filedata.name, ".") == 0 || strcmp(filedata.name, "..")==0)
			continue;
		if (filedata.attrib & _A_SUBDIR)
			subdir.push_back(filedata.name);
		else
			subfile.push_back(filedata.name);
	} while (_findnext(handle,&filedata)==0);
	_findclose(handle);
}