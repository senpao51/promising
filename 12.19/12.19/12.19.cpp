#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string.h>
//using namespace std;
//void  Abs(char*tmp, int year, int n)
//{
//	char buf[5] = { 0 };
//	sprintf(buf, "%d", year);
//	strcat(tmp, buf);
//}
//void main()
//{
//	int year = 0;
//	int n = 0;
//	cin >> year;
//	cin >> n;
//	char tmp[20] = { 0 };
//	Abs(tmp, year, n);
//	cout << tmp << endl;
//}
#include <iostream>
#include <string.h>
using namespace std;
bool IsLeap(int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
		return true;
	return false;
}
void AddDay(char*tmp, int year, int month, int day, int n)
{
	char buf[5] = { 0 };
	static int monthdays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	day += n;
	int i = 0;
	while (day>monthdays[i])
	{
		if (IsLeap(year) && month == 2)
			monthdays[1]++;
		day -= monthdays[i];
		i++;
		month++;
		if (month>12)
		{
			month = 1;
			year++;
		}
	}
	sprintf(buf, "%d", year);
	strcat(tmp, buf);
	strcat(tmp, "-");
	if (month<10)
		strcat(tmp, "0");
	sprintf(buf, "%d", month);
	strcat(tmp, buf);
	strcat(tmp, "-");
	if (day<10)
		strcat(tmp, "0");
	sprintf(buf, "%d", day);
	strcat(tmp, buf);
}
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int n = 0;
	cin >> year;
	cin >> month;
	cin >> day;
	cin >> n;
	char tmp[20] = { 0 };
	AddDay(tmp, year, month, day, n);
	cout << tmp << endl;
	return 0;
}