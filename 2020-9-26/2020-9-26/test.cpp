#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//int main()
//{
//	int a, b, k, v;
//	while (cin >> a >> b >> k >> v)
//	{
//		int count = 0;
//		while (a>0 && b>0)
//		{
//			if (b >= k - 1)
//			{
//				a = a - k*v;
//				b = b - k + 1;
//			}
//			else
//			{
//				a = a - (b+1)*v;
//				b = 0;
//			}
//			count++;
//		}
//		if (a <= 0)
//			cout << count << endl;
//		else
//		{
//			while (a>0)
//			{
//				a = a - v;
//				count++;
//			}
//			cout << count << endl;
//		}
//	}
//	return 0;
//}
//#include <iostream>
//#include <vld.h>
//using namespace std;
//int main()
//{
//	int a = 248;
//	int const c = 21; 
//	const int *d = &a;
//	int *const e = &a; 
//	int const * const f = &a;
//	//int a = (7&0xAAAAAAAA);
//	int b = (7&0x55555555);
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}



//int main()
//{
//	//A* ptr = new A[1024];
//	//delete ptr;
//	unsigned int a = 1;
//	while (a)
//	{
//		cout << a << endl;
//		a <<= 1;
//	}
//	return 0 ;
//}