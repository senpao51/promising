#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"
void main()
{
	Date dt1(2019,12,4);
	Date dt2 = dt1 + 7487;
	Date dt3(1970,12,4);
	Date dt4(1999, 12, 4);
	Date dt5 =dt2--;
	Date dt6;

	//cin >>dt6 ;
	//cout << dt6 << endl;
	cout << (dt1 - dt3) << endl;
	//cout << dt2 << endl;
}