#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"
ostream& operator<<(ostream &out, const Date&d)
{
	out << d._year << "年" << d._month << "月" << d._day << "日"<<d._hour<<"时"<<d._minute<<"分"<<d._second<<"秒";
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
int GetDayByYearMonth(int year,int month)
{
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))&&month==2)
	{
		days[month-1]++;
	}
	return days[month-1];
}
//时间转时间戳
long long Date::TimeChangeTimestamp(const Date&d)
{
	struct tm stm;
	stm.tm_year = d._year-1900;
	stm.tm_mon = d._month-1;
	stm.tm_mday = d._day;
	stm.tm_hour = d._hour;
	stm.tm_min = d._minute;
	stm.tm_sec = d._second;
	return (long long)mktime(&stm);
}
long long Date::TimeChangeTimestamp()
{
	struct tm stm;
	stm.tm_year = _year-1900;
	stm.tm_mon = _month-1;
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
	/*Date d;
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
	return d;*/
	int mdays;
	Date tmp = *this;
	while (tmp._day - day < 1)
	{
		tmp._month--;
		if (tmp._month < 1)
		{
			tmp._month = 12;
			tmp._year--;
		}
		mdays = GetDayByYearMonth(tmp._year,tmp._month);
		day -= mdays;
	}
	tmp._day -= day;
	return tmp;
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
	if (_year > d._year)
		return true;
	else if (_year<d._year)
		return false;
	else if (_month>d._month)
		return true;
	else if (_month<d._month)
		return false;
	else if (_day>d._day)
		return true;
	return false;
}
bool Date::operator<=(const Date&d)const
{
	return (!(*this==d));
}
bool Date::operator<(const Date&d)const
{
	if (_year < d._year)
		return true;
	else if (_year>d._year)
		return false;
	else if (_month<d._month)
		return true;
	else if (_month>d._month)
		return false;
	else if (_day < d._day)
		return true;
	return false;
}
bool Date::operator>=(const Date&d)const
{
	return(!(*this==d));
}
bool Date::operator==(const Date&d)const
{
	return _year == d._year && _month == d._month && _day == d._day && _hour == d._hour && _minute == d._minute && _second == d._second;
}
bool Date::operator!=(const Date&d)const
{
	return!(*this==d);
}