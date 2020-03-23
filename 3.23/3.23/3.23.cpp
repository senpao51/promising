#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
	string s = "hello world";
	char ch1 = 'c';
	string s1 = s + ch1;
	cout << s1 << endl;
	return 0;
}
//int main()
//{
//	string s1;
//	string s2;
//	while (cin >> s1 >> s2)
//	{
//		string tmp = "";
//		char ch1 = '\0';
//		char ch2 = '\0';
//		int len = 0;
//		string **num = new string*[s1.size()];
//		for (int i = 0; i<s1.size(); i++)
//		{
//			num[i] = new string[s2.size()];
//		}
//		for (int i = 0; i<s1.size(); i++)
//		{
//			for (int j = 0; j<s2.size(); j++)
//			{
//				ch1 = s1[i];
//				ch2 = s2[j];
//				if (ch1 != ch2)
//				{
//					num[i][j] = "";
//				}
//				else
//				{
//					if (i == 0 || j == 0)
//					{
//						num[i][j] = ch1;
//					}
//					else
//					{
//						num[i][j] = num[i - 1][j - 1] + ch1;
//					}
//					if (num[i][j].size()>len)
//					{
//						len = num[i][j].size();
//						tmp = num[i][j];
//					}
//				}
//			}
//		}
//		for (int i = 0; i<s1.size(); i++)
//		{
//			delete[]num[i];
//		}
//		delete[]num;
//		cout << tmp << endl;
//	}
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <string.h>
//using namespace std;
//int main()
//{
//	string s1;
//	string s2;
//	while (cin >> s1 >> s2)
//	{
//		cout << s1.c_str() << endl;
//		const char*str1 = s1.c_str();
//		const char*str2 = s2.c_str();
//		cout << strstr(str1,str2) << endl;
//	}
//	return 0;
//}
//void fun(int n,vector<int>&v)
//{
//	for (int i = 1; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			v.push_back(i);
//			if (n / i != i)
//				v.push_back(n / i);
//		}
//	}
//}
//int main()
//{
//	vector<int>v;
//	fun(12,v);
//	for (const auto e : v)
//		cout << e << " ";
//	return 0;
//}
//class A
//{
//public:
//	void fun()
//	{
//		cout << "A::fun()" << endl;
//	}
//};
//class B :public A
//{
//public:
//	virtual void fun()
//	{
//		cout << "B::fun()" << endl;
//	}
//};
//int main()
//{
//	B b;
//	A*pa = &b;
//	pa->fun();
//	return 0;
//}
//int main()
//{
//	const int a = 10;
//	int * p = (int*)(&a);
//	*p = 20;
//	cout << "a = " << a << ", *p = " << *p << endl;
//	return 0;
//}
//void print(char*s)
//{
//	if (*s)
//	{
//		print(++s);
//		printf("%c",*s);
//	}
//}
//int main()
//{
//	char*str = "Geneius";
//	//print(str);
//	char a = '\0';
//	cout << "a"<<a<<"a" << endl;
//	const int b = 0;
//	return 0;
//int main()
//{
//	char a[14] = "hello world!";
//	char b[14];
//	(const char*)b = "hello world!";
//	return 0;
//}
//void swap(int*a, int*b)
//{
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}
//int main()
//{
//	int a = 2147483646;
//	int b = 2;
//	swap(&a, &b);
//	cout << a << endl;
//	cout << b << endl;
//	system("pause");
//	return 0;
//}
