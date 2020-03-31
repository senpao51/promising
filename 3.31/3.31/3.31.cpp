#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string compressString(string s)
{
	string tmp = s;
	if (s.size() == 0)
		return s;
	auto it = s.begin();
	int count = 1;
	char ch = *it;
	while (it != s.end())
	{
		while ((it + 1) != s.end() && *it == *(it + 1))
		{
			it = s.erase(it);
			count++;
		}
		if ((it + 1) == s.end())
		{
			ch = count + '0';
			s.insert(++it,ch);
			break;
		}
		if (*it != *(it + 1))
		{
			ch = count + '0';
			s.insert(++it, ch);
			count = 1;
			it++;
		}
	}
	if (tmp.size() <= s.size())
		return tmp;
	return s;
}
int main()
{
	string s = "aabccccca";
	auto it = s.begin();
	it = s.erase(it);
	cout << s << endl;
	cout << *it << endl;
	cout << compressString(s) << endl;
	return 0;
}
//int main()
//{
//	string s = "helloworld";
//	string tmp(s.begin(),s.begin()+4);
//	cout << tmp << endl;
//	char a = 1 + '0';
//	cout << typeid(a).name()<< endl;
//	char ch = 'c';
//	tmp.insert(tmp.end(),ch);
//	cout << tmp << endl;
//	auto p = s.end();
//	cout << *p << endl;
//	return 0;
//}
//class A
//{
//public:
//	A()
//	{}
//	virtual void fun()
//	{
//		cout << "A::fun()" << endl;
//	}
//	void show()
//	{
//		cout << "A::show()" << endl;
//	}
//private:
//	int m_a;
//};
//class B :public A
//{
//public:
//	B()
//	{}
//	void fun()
//	{
//		cout << "B::fun()" << endl;
//	}
//	void show()
//	{
//		cout << "B::show()" << endl;
//	}
//private:
//	int m_b;
//};
//int main()
//{
//	B b;
//	return 0;
//}
//int main()
//{
//	double a = 12.000034;
//	double b = 12.000035;
//	if (a > b)
//		cout << "a" << endl;
//	else
//		cout << "b" << endl;
//	cout << a << endl;
//	return 0;
//}
//int jumpFloorII(int number)
//{
//	if (number<1)
//		return 1;
//	int count = 2;
//	for (int i = 2; i<number; i++)
//	{
//		count *= 2;
//	}
//	return count;
//}
//
//int main()
//{
//	cout << jumpFloorII(5) << endl;
//	return 0;
//}
