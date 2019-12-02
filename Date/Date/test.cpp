#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"
void main()
{
	Date dt1(1999,6,3);
	Date dt2 = dt1 + 7487;
	Date dt3(1999, 6, 3);
	Date dt4(1968, 10, 30);
	Date dt5 =dt2++;
	cout << dt3 - dt4 << endl;
	cout << dt2 << endl;
}