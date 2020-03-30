#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
class A
{
public:
	virtual void show()
	{
		cout << "A::show()" << endl;
	}
};
class B :public A
{
public:
	void show()override
	{
		cout << "B::show()" << endl;
	}
};
int main()
{
	B b;
	A*pa = &b;
	pa->show();
	return 0;
}
//class A
//{
//public:
//	virtual ~A()
//	{
//		cout << "A::~A()" << endl;
//	}
//};
//class B :public A
//{
//public:
//	virtual ~B()
//	{
//		cout << "B::~B()" << endl;
//	}
//};
//int main()
//{
//	A*pa1 = new B;
//	A*pa2 = new A;
//	delete pa1;
//	delete pa2;
//	return 0;
//}
//class A
//{
//public:
//	A*show()
//	{
//		cout << "A::show()" << endl;
//		return this;
//	}
//};
//class B :public A
//{
//public:
//	B* show()
//	{
//		cout << "B::show()" << endl;
//		return this;
//	}
//};
//int main()
//{
//	B b;
//	A*pa = &b;
//}
//class Person
//{
//public:
//	virtual void work()
//	{
//		cout << "Person::work" << endl;
//	}
//	virtual void fun()
//	{
//		cout << "Person::fun()" << endl;
//	}
//};
//class Child:public Person
//{
//public:
//	void work()
//	{
//		cout << "Child::work()" << endl;
//	}
//	void fun()
//	{
//		cout << "Child::fun()" << endl;
//	}
//};
//class Parent:public Person
//{
//public:
//	void work()
//	{
//		cout << "Parent::work()" << endl;
//	}
//	void fun()
//	{
//		cout << "Parent::fun()" << endl;
//	}
//};
//int main()
//{
//	Child c;
//	Parent p;
//	Person*per = &c;
//	Person&rper = p;
//	per->fun();
//	per->work();
//	rper.fun();
//	rper.work();
//}
//union un
//{
//	int a;
//	char ch;
//};
//
//int main()
//{
//	un u;
//	u.a = 1;
//	cout << (int)u.ch << endl;
//	int a = 12345678;
//	printf("%p\n",a);
//	return 0;
//}
//int GetEveryDigit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		int tmp = n % 10;
//		count += tmp;
//		n /= 10;
//	}
//	return count;
//}
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int n = 0;
//		for (int i = 0; i<s.size(); i++)
//		{
//			n += (s[i] - '\0');
//		}
//		int ret = GetEveryDigit(n);
//		while (ret >= 10)
//		{
//			n = ret;
//			ret = GetEveryDigit(n);
//		}
//		cout << ret << endl;
//	}
//	return 0;
//}