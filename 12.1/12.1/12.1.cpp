#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <time.h>
using namespace std;

 
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1);
	Date(const Date& d);
	Date& operator=(const Date& d);
	Date operator+(int days);
	Date operator-(int days);
	int operator-(const Date& d);
	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);
	bool operator>(const Date& d)const;
	bool operator>=(const Date& d)const;
	bool operator<(const Date& d)const;
	bool operator<=(const Date& d)const;
	bool operator==(const Date&d)const;
	bool operator!=(const Date&d)const;
private:
	int _year;
	int _month;
	int _day;
};
Date::Date(int year, int month, int day) :_year(year), _month(month), _day(day)
{}
Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
}
Date& Date::operator=(const Date& d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}
//Date Date::operator+(int days)
//{
//	Date tmp(_year,_month,_day);
//}
Date& Date::operator++()
{

}



void main()
{
	Date d1;
	Date d2 = d1 + 100;
}
//typedef struct Test
//{
//	int a;
//	struct
//	{
//		short b;
//		double d;
//		char ch;
//	};
//	long e;
//}Test;
//void main()
//{
//	Test t;
//	cout << sizeof(t) << endl;
//}
//struct s1
//{
//	short b =2;
//	double d =5.5;
//	char ch = 'a';
//};
//struct s2
//{
//	int a =1;
//	struct s1 b;
//	long e = 10;
//};
//void main()
//{
//	s2 s;
//	cout << sizeof(s) << endl;
//}
//class Int
//{
//	friend ostream& operator<<(ostream&out, const Int&x);
//	friend istream& operator>>(istream&in, Int&x);
//public:
//	Int(int i=0) :m_i(i)
//	{}
//	~Int()
//	{}
//public:
//	Int operator+(const Int&x)
//	{
//		return Int(m_i+x.m_i);
//	}
//	Int operator-(const Int&x)
//	{
//		return Int(m_i-x.m_i);
//	}
//	Int operator*(const Int&x)
//	{
//		return Int(m_i*x.m_i);
//	}
//	Int operator/(const Int&x)
//	{
//		return Int(m_i/x.m_i);
//	}
//	Int operator%(const Int&x)
//	{
//		return Int(m_i%x.m_i);
//	}
//public:
//	Int& operator+=(const Int&x)
//	{
//		m_i += x.m_i;
//		return *this;
//	}
//	Int& operator-=(const Int&x)
//	{
//		m_i -= x.m_i;
//		return *this;
//	}
//	Int& operator*=(const Int&x)
//	{
//		m_i *= x.m_i;
//		return *this;
//	}
//	Int& operator/=(const Int&x)
//	{
//		m_i /= x.m_i;
//		return *this;
//	}
//	Int& operator%=(const Int&x)
//	{
//		m_i %= x.m_i;
//		return *this;
//	}
//public:
//	Int&operator++()//«∞÷√++
//	{
//		m_i++;
//		return *this;
//	}
//	Int operator++(int)//∫Û÷√++
//	{
//		Int tmp(m_i);
//		m_i++;
//		return tmp;
//	}
//private:
//	int m_i;
//};
//ostream&operator<<(ostream&out, const Int&x)
//{
//	out << x.m_i;
//	return out;
//}
//istream& operator>>(istream&in, Int&x)
//{
//	in >> x.m_i;
//	return in;
//}
//void main()
//{
//
//	Int i1(10);
//	Int i2 = i1++;
//	cout << "i1 = " << i1 << endl;
//	cout << "i2 = " << i2 << endl;
//	//Int i1(10);
//	//cout << i1 << endl;
//	//Int i2;
//	///*cin >> i2;
//	//cout << i2 << endl;*/
//	//Int i3 = i1 + i2;
//	//i1 %= i2;
//	//cout << i1 << endl;
//	////Int i4 = i1++;//i1
//}