#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class test
{
public:
	test();
	test(char*name);
	~test();
	test& operator=(const test&t2)
	{
		if (&t2 != this)
		{
			strcpy(this->name,t2.name);
			strcpy(this->sex, t2.sex);
			this->age = t2.age;
		}
		return *this;
	}
	bool operator==(const test&t2)
	{
		return this->name == t2.name&&this->sex == t2.sex&&this->age == t2.age;
	}
	void fun()const
	{
		cout << typeid(this).name() << endl;
	}
private:
	char name[20];
	char sex[5];
	int age;
};
test::test(char*name)
{
	strcpy(this->name,name);
	strcpy(sex,"nan");
	age = 20;
}
test::test()
{
	strcpy(name,"senpao");
	strcpy(sex,"nan");
	age = 20;
}


test::~test()
{
	strcpy(name,"zhangsan");
	strcpy(sex, "nv");
	age = 15;
}



void main()
{
	test t1;
	test t2("lisi");
	cout << (t1 == t2) << endl;
	t1.fun();
}




//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//void main()
//{
//	String s1;
//
//}





//class Date
//{
//public:
//	void Display()
//	{
//		cout << "Display ()" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//	void Display() const
//	{
//		cout << "Display () const" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//private:
//	int _year; // Äê
//	int _month; // ÔÂ
//	int _day; // ÈÕ
//};
//void main()
//{
//	Date d1;
//	d1.Display();
//
//	const Date d2;
//	d2.Display();
//}




