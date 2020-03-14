#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
using namespace std;
string replaceSpace(string s)
{
	if (s.size() == 0)
		return s;
	int count = 0;
	for (auto e : s)
	{
		if (e == ' ')
			count++;
	}
	int oldpoint = 0;
	int newpoint = 0;
	while (s[oldpoint] != '\0')
		oldpoint++;
	newpoint = oldpoint + 2 * count;
	while (newpoint>oldpoint&&oldpoint>=0)
	{
		if (s[oldpoint] == ' ')
		{
			oldpoint--;
			s[newpoint--] = '0';
			s[newpoint--] = '2';
			s[newpoint--] = '%';
		}
		else
		{
			s[newpoint--] = s[oldpoint--];
		}
	}
	return s;
}
int main()
{
	string s = "we are h a p p y ";
	s.resize(100);
	cout<<replaceSpace(s) << endl;
	return 0;
}
//void replaceblank(char string[], int length)
//{
//	if (string == NULL || length <= 0)
//		return;
//}
//int main()
//{
//	return 0;
//}
//int binInsert(int n, int m, int j, int i)
//{
//	int count = 0;
//	int ret = m;
//	while (ret)
//	{
//		count++;
//		ret = ret >> 1;
//	}
//	vector<int>v1;
//	vector<int>v2;
//	v1.resize(j);
//	v2.resize(count);
//	for (int k = 0; k<j; k++)
//	{
//		v1[k] = n & 1;
//		n = n >> 1;
//	}
//	for (int k = 0; k < i-j+1; k++)
//	{
//		v2[k] = m & 1;
//		m = m >> 1;
//	}
//	for (int k = 0; k < count; k++)
//	{
//		n = n >> 1;
//	}
//	for (int k = count - 1; k >= 0;k--)
//	{
//		n = n << 1;
//		n = n|v2[k];
//	}
//
//	for (int k = 0; k<j; k++)
//	{
//		n = n << 1;
//		n = n|v1[k];
//	}
//	return n;
//}
//int main()
//{
//	cout << binInsert(1024, 19, 2, 6) << endl;;
//}
//int main()
//{
//	int a = 4;
//	int b = 8;
//	cout << (a|b) << endl;
//}
//class Base
//{
//public:
//	int Bar(char x)
//	{
//		return (int)(x);
//	}
//	virtual int Bar(int x)
//	{
//		return (2 * x);
//	}
//};
//class Derived :public Base
//{
//public:
//	int Bar(char x)
//	{
//		return (int)(-x);
//	}
//	int Bar(int x)
//	{
//		return (x / 2);
//	}
//};
//int main()
//{
//	Derived Obj;
//	Base*pObj = &Obj;
//	cout << pObj->Bar((char)(100)) << endl;
//	cout << pObj->Bar(100) << endl;
//	return 0;
//}
