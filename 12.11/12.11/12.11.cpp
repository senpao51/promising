#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vld.h>
using namespace std;
//class Test
//{
//private:
//	int data;
//};
//void main()
//{
//	Test*t = new Test[10];
//	delete []t;
//}
int iConverDateToDay(int year, int month, int day)
{
	int sum = 0;
	if (year<0 || month<0 || month>12 || day<0 || day>31)
		return -1;
	int array[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	bool flag = true;
	if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
		flag = false;
	for (int i = 1; i<month; i++)
	{
		if (i == 2 && flag == false)
			sum++;
		sum += array[i];
	}
	sum += day;
	return sum;
}
int main()
{
	int year = 1999;
	int month = 12;
	int day = 31;
	cin >> year >> month >> day;
	cout << iConverDateToDay(year, month, day) << endl;
	return 0;
}

