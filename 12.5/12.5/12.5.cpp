#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//class Date
//{
//	friend ostream& operator<<(ostream& out, const Date&d);
//	friend istream& operator>>(istream&in, const Date&d);
//public:
//private:
//	static int _year;
//};
//int Date::_year = 10;
//ostream& operator<<(ostream& out, const Date&d)
//{
//	out << d._year;
//	return out;
//}
//istream& operator>>(istream&in, const Date&d)
//{
//	in >> d._year;
//	return in;
//}
//void main()
//{
//	Date t;
//	cin >> t;
//	cout << t << endl;
//}
//class Date
//{
//public:
//	Date(int year)
//	{}
//	static void show1()
//	{
//		cout << "static show" << endl;
//		show2();
//	}
//	void show2()
//	{
//		cout << "show" << endl;
//		show1();
//	}
//private:
//	static int _year;
//};
//int Date::_year = 10;
//void main()
//{
//	Date t(10);
//	t.show1();
//	t.show2();
//}
//class Time;
//class Date;
//class Time
//{
//	friend class Date;
//public:
//	void show()
//	{
//		cout << d.a << endl;
//	}
//private:
//	static int _year;
//	int _month;
//	Date d;
//};
//class Date
//{
//	friend class Time;//声明Time类是Date类的友元类，所以在Time里面可以访问Date的私有成员
//public:
//	void show()
//	{
//		t._year = 10;
//	}
//private:
//	static int a;
//	int b;
//	Time t;
//};
//
//int Time::_year = 10;
//int Date::a = 10;
//void main()
//{
//	Time tm;
//	tm.show();
//}

class Date
{
public:
	class Time
	{
	public:
		void show();
		void fun(const Date&d)
		{
			a = 10;
			cout << d.d << endl;
		}
	private:
		static int b;
		int c;
	};
private:
	static int a;
	int d;
	
};
int Date::a = 10;
int Date::Time::b = 20;
void Date::Time::show()
{
	cout << Date::a << endl;
	cout << Date::Time::b << endl;
}
void main()
{
	Date d;
	Date::Time t;
	t.show();
}