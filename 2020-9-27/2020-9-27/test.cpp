#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
int main()
{
	int T;
	while (cin >> T)
	{
		for (int t = 0; t<T; t++)
		{
			int len = 0;
			cin >> len;
			vector<string>v(len);
			for (int i = 0; i<len; i++)
			{
				getline(cin, v[i]);
			}
			map<int, string>mp;
			int fd = 0;
			for (int i = 0; i < len; i++)
			{
				auto p = v[i].find(" ");

				string str = v[i].substr(0, p);
				if (str == "open")
				{
					string filename = v[i].substr(p + 1);
					mp[fd] = filename;
					cout << fd << endl;
				}
				else if (str == "dup")
				{
					string newfd = v[i].substr(p + 1);
					cout << newfd << endl;
				}
				else if (str == "query")
				{
					string newfd = v[i].substr(p + 1);
					cout << mp[atoi(newfd.c_str())] << endl;
				}
				else if (str == "close")
				{
					string closefd = v[i].substr(p + 1);
					mp.erase(atoi(closefd.c_str()));
				}
				else if (str == "dup2")
				{
					string s = "helloworld";
					auto q = v[i].find(" ");
					string oldfd = v[i].substr(p + 1, q - p + 1);
					string newfd = v[i].substr(q + 1);
				}
			}
		}
	}
	return 0;
}
//#include <iostream>
//#include <vector>
//using namespace std;
//void Shun(vector<vector<int>>&v, int xstart, int xend, int ystart, int yend, int &count)
//{
//	for (int i = ystart; i<yend; i++)
//	{
//		v[xstart][i] = count;
//		if (i == yend - 1)
//			break;
//		count++;
//	}
//	for (int i = xstart; i<xend; i++)
//	{
//		v[i][yend - 1] = count;
//		if (i == xend - 1)
//			break;
//		count++;
//	}
//	for (int i = yend - 1; i >= ystart; i--)
//	{
//		v[xend - 1][i] = count;
//		if (i == ystart)
//			break;
//		count++;
//	}
//	for (int i = xend - 1; i >xstart; i--)
//	{
//		v[i][ystart] = count;
//		if (i == xstart)
//			break;
//		count++;
//	}
//}
//void Ni(vector<vector<int>>&v, int xstart, int xend, int ystart, int yend, int& count)
//{
//	for (int i = xstart; i<xend; i++)
//	{
//		v[i][ystart] = count;
//		if (i == xend - 1)
//			break;
//		count++;
//	}
//	for (int i = ystart; i<yend; i++)
//	{
//		v[xend - 1][i] = count;
//		if (i == yend - 1)
//			break;
//		count++;
//	}
//	for (int i = xend - 1; i >= xstart; i--)
//	{
//		v[i][yend - 1] = count;
//		if (i == xstart)
//			break;
//		count++;
//	}
//	for (int i = yend - 1; i >ystart; i--)
//	{
//		v[xstart][i] = count;
//		if (i == ystart)
//			break;
//		count++;
//	}
//}
//void SnakeBoard(vector<vector<int>>&v)
//{
//	if (v.size() == 0)
//		return;
//	int count = 1;
//	int len = v.size();
//	int xstart = 0;
//	int ystart = 0;
//	int xend = len;
//	int yend = len;
//	while (count != (len*len))
//	{
//		Shun(v, xstart++, xend--, ystart++, yend--, count);
//		Ni(v, xstart++, xend--, ystart++, yend--, count);
//	}
//}
//int main()
//{
//	int C;
//	while (cin >> C)
//	{
//		int len = 0;
//		int num = 0;
//		cin >> len >> num;
//		vector<vector<int>>v(len, vector<int>(len, 0));
//		vector<vector<int>>Dian(num, vector<int>(2, 0));
//		for (int i = 0; i<num; i++)
//		{
//			cin >> Dian[i][0];
//			cin >> Dian[i][1];
//		}
//		SnakeBoard(v);
//		for (int i = 0; i<num; i++)
//		{
//			cout << v[Dian[i][0]][Dian[i][1]] << endl;;
//		}
//	}
//}
//void Shun(vector<vector<int>>&v, int xstart, int xend, int ystart, int yend,int &count)
//{
//	for (int i = ystart; i<yend; i++)
//	{
//		v[xstart][i] = count;
//		if (i == yend - 1)
//			break;
//		count++;
//	}
//	for (int i = xstart; i<xend; i++)
//	{
//		v[i][yend - 1] = count;
//		if (i == xend - 1)
//			break;
//		count++;
//	}
//	for (int i = yend - 1; i >= ystart; i--)
//	{
//		v[xend - 1][i] = count;
//		if (i == ystart)
//			break;
//		count++;
//	}
//	for (int i = xend - 1; i >xstart; i--)
//	{
//		v[i][ystart] = count;
//		if (i == xstart)
//			break;
//		count++;
//	}
//}
//void Ni(vector<vector<int>>&v, int xstart, int xend, int ystart, int yend, int& count)
//{
//	for (int i = xstart; i<xend; i++)
//	{
//		v[i][ystart] = count;
//		if (i == xend - 1)
//			break;
//		count++;
//	}
//	for (int i = ystart; i<yend; i++)
//	{
//		v[xend-1][i] = count;
//		if (i == yend - 1)
//			break;
//		count++;
//	}
//	for (int i = xend - 1; i >= xstart; i--)
//	{
//		v[i][yend-1] = count;
//		if (i == xstart)
//			break;
//		count++;
//	}
//	for (int i = yend - 1; i >ystart; i--)
//	{
//		v[xstart][i] = count;
//		if (i == ystart)
//			break;
//		count++;
//	}
//}
//int main()
//{
//	int count = 1;
//	vector<vector<int>>v(7,vector<int>(7,0));
//	Shun(v,0,7,0,7,count);
//	Ni(v,1,6,1,6,count);
//	Shun(v,2,5,2,5,count);
//	Ni(v,3,4,3,4,count);
//	for (auto &e : v)
//	{
//		for (auto&p : e)
//			printf("%3d ",p);
//		cout << endl;
//	}
//	return 0;
//}
//class A
//{
//public:
//	virtual void fun()
//	{}
//	virtual void show()
//	{}
//	void sh()
//	{}
//};
//class B :public A
//{
//	///static int a;
//	int a;
//public:
//	virtual void c()
//	{}
//};
//int main()
//{
//	B b;
//	cout << sizeof(b) << endl;
//	return 0;
//}