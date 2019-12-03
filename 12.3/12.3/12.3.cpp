#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	B(int a, int ref) :_aobj(a), _ref(ref), _n(10)
//	{}
//private:
//	A _aobj;
//	int& _ref;
//	const int _n;
//};
//void main()
//{
//	B d(1,2);
//}
class date
{
public:
	date(int z) :_year(z)
	{}
private:
	int _year;
};
class test
{
public:
	test(int x,int y,int z) :a(x), b(y), d(z)
	{}
private:
	int &a;
	const int b;
	date d;
};
void main()
{
	test t(100,200,300);
}
//class Date
//{
//public:
//	explicit Date(int year) :_year(year)
//	{}
//	Date()
//	{
//
//	}
//	Date&operator=(const Date&d) 
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//		}
//		return *this;
//	}
//private:
//	int _year;
//};
//void main()
//{
//	Date d(10);
//	d = 2019;
//}
//class test
//{
//public:
//	test()//无参的构造函数
//	{
//		strcpy(_name, "senpao");
//		strcpy(_sex, "nan");
//		_age = 20;
//	}
//	test(char*name):_name(name)//缺省参数的构造函数
//	{
//		strcpy(_sex,"nan");
//		_age = 15;
//	}
//private:
//	char _name[20];
//	char _sex[5];
//	int _age;
//};
//void main()
//{
//	test t1;
//	test t2("lisi");
//}
//class test
//{
//public:
//	test(int x, int y,int z) :a(x), b(y), c(z)
//	{}
//private:
//	int a;
//	int b;
//	int c;
//};
//void main()
//{
//	test t1(1, 2, 3);
//}