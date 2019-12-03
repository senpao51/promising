#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"
ostream& operator<<(ostream &out, const Date&d)
{
	out << d._year << "��" << d._month << "��" << d._day << "��"<<d._hour<<"ʱ"<<d._minute<<"��"<<d._second<<"��";
	return out;
}
istream& operator>>(istream &in, const Date&d)
{
	in  >> d._year;
	in >> d._month;
	in >> d._day;
	in  >> d._hour;
	in  >> d._minute ;
	in >> d._second;
	return in;
}


Date::Date(int year, int month, int day, int hour, int minute, int second)
: _year(year), _month(month), _day(day), _hour(hour), _minute(minute), _second(second)
{}

Date::Date(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
	_hour = d._hour;
	_minute = d._minute;
	_second = d._second;
}
Date& Date::operator=(const Date&d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		_hour = d._hour;
		_minute = d._minute;
		_second = d._second;
	}
	return *this;
}
int Date::GetYear()const
{
	return _year;
}
int Date::GetMonth()const
{
	return _month;
}
int Date::GetDay()const
{
	return _day;
}
//ʱ��תʱ���
long long Date::TimeChangeTimestamp(const Date&d)
{
	struct tm stm;
	stm.tm_year = d._year- 1900;
	stm.tm_mon = d._month - 1;
	stm.tm_mday = d._day;
	stm.tm_hour = d._hour;
	stm.tm_min = d._minute;
	stm.tm_sec = d._second;
	return (long long)mktime(&stm);
}
long long Date::TimeChangeTimestamp()
{
	struct tm stm;
	stm.tm_year = _year - 1900;
	stm.tm_mon = _month - 1;
	stm.tm_mday = _day;
	stm.tm_hour = _hour;
	stm.tm_min = _minute;
	stm.tm_sec = _second;
	return (long long)mktime(&stm);
}
Date Date::operator+(int day)
{
	Date d;
	long long timestamp = TimeChangeTimestamp();
	timestamp = timestamp + day * 24 * 3600;
	time_t tem = (time_t)timestamp;
	struct tm* ptm = localtime(&tem);
	d._year = ptm->tm_year+1900;
	d._month = ptm->tm_mon+1;
	d._day = ptm->tm_mday;
	d._hour = ptm->tm_hour;
	d._minute = ptm->tm_min;
	d._second = ptm->tm_sec;
	return d;
}
Date Date::operator-(int day)
{
	Date d;
	long long timestamp = TimeChangeTimestamp();
	timestamp = timestamp - day * 24 * 3600;
	time_t tem = (time_t)timestamp;
	struct tm*ptm = localtime(&tem);
	d._year = ptm->tm_year + 1900;
	d._month = ptm->tm_mon + 1;
	d._day = ptm->tm_mday;
	d._hour = ptm->tm_hour;
	d._minute = ptm->tm_min;
	d._second = ptm->tm_sec;
	return d;
}
int Date::operator-(const Date&d)
{
	long long timestamp1 = TimeChangeTimestamp();
	long long timestamp2 = TimeChangeTimestamp(d);
	int TimeStamp = (int)(timestamp1 - timestamp2);
	return TimeStamp / (24 * 3600);
}
Date&Date::operator++()
{
	_day++;
	return *this;
}
Date Date::operator++(int)
{
	Date d = *this;
	++*this;
	return d;
}
Date&Date::operator--()
{
	_day--;
	return *this;
}
Date Date::operator--(int)
{
	Date d = *this;
	--*this;
	return d;
}

bool Date::operator>(const Date& d)const
{
	return _year > d._year || _month > d._month || _day > d._day || _hour > d._hour || _minute > d._minute || _second > d._second;
}
bool Date::operator<=(const Date&d)const
{
	return (!operator>(d));
}
bool Date::operator<(const Date&d)const
{
	return _year < d._year || _month < d._month || _day < d._day || _hour < d._hour || _minute < d._minute || _second < d._second;
}
bool Date::operator>=(const Date&d)const
{
	return(!operator<(d));
}
bool Date::operator==(const Date&d)const
{
	return _year == d._year && _month == d._month && _day == d._day && _hour == d._hour && _minute == d._minute && _second == d._second;
}
bool Date::operator!=(const Date&d)const
{
	return(!operator==(d));
}