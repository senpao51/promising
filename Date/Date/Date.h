#pragma once 
#include <iostream>
#include <time.h>
using namespace std;
class Date
{
	friend ostream& operator<<(ostream &out,const Date&d);
	friend istream& operator>>(istream &in, const Date&d);
public:
	void DateExchangeStr(char*str);
	long long TimeChangeTimestamp(const Date&d);
	long long TimeChangeTimestamp();
	Date(int year = 1970, int month = 1, int day = 1, int hour = 8, int minute = 0, int second = 0);
	int GetWeek();
	Date(const Date& d);
	int GetYear()const;
	int GetMonth()const;
	int GetDay()const;
	Date& operator=(const Date& d);
	Date operator+(int days);
	Date operator-(int days);
	int operator-(const Date& d);
	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);
	bool operator>(const Date& d)const;
	bool operator<=(const Date& d)const;
	bool operator>=(const Date& d)const;
	bool operator<(const Date& d)const;
	bool operator==(const Date&d)const;
	bool operator!=(const Date&d)const;
private:
	int _year;
	int _month;
	int _day;
	int _hour;
	int _minute;
	int _second;
};