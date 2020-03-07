#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class A
{
public:
	void print()
	{
		cout << "print" << endl;
		show();
	}
protected:
	void show()
	{
		cout << "show" << endl;
	}
protected:
	int a;
	int b;
};
class B:public A
{
public:
	void fun()
	{
		cout << "fun" << endl;
	}
protected:
	int a = 0;
	int b;
};
int main()
{
	B b;
	b.fun();
	b.print();
	return 0;
}
//int main()
//{
//	int a = 123;
//	char str[20];
//	sprintf(str,"%d",a);
//	cout << str << endl;
//	string s(str);
//	cout << s << endl;
//	return 0;
//}
//int StrToInt(string str)
//{
//	if (str.size() == 0)
//		return 0;
//	int sum = 0;
//	int count = 0;
//	int ret = 1;
//	if (str[0] == '-')
//		ret = -1;
//	for (int i = str.size() - 1; i >= 1; i--)
//	{
//		if ((str[i] <= '9') && (str[i] >= '0'))
//		{
//			int tmp = (str[i]-48) * pow(10, count++);
//			sum += tmp;
//		}
//		else
//			return 0;
//	}
//	return sum*ret;
//}
//int main()
//{
//	string s = "4";
//	auto p = s.rbegin();
//	cout << *p << endl;
//	cout << StrToInt(s) << endl;
//	return 0;
//}
//int main()
//{
//	int a[5] = {1,3,5,7,9};
//	int *p = (int*)(&a + 1);
//	return 0;
//}
//int main()
//{
//	return 0;
//}
