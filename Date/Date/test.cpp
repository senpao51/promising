#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"
void main()
{
	Date dt1(1999,6,3);
	Date dt2 = dt1 + 7487;
	Date dt3(1999,6,3);
	Date dt4(1968, 10, 30);
	Date dt5 =dt2--;
	Date dt6;
	cin >>dt6 ;
	cout << dt6 << endl;
	cout << (dt3 == dt1) << endl;
	cout << dt2 << endl;
}