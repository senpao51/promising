#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	const int * p = nullptr;
	p = (const int*)1;
}
//int sum()
//{
//	int sum;
//	int* const point1;
//	int const* point2;
//	point1 = &sum;
//	point2 = func1()
//}
//int main()
//{
//	int ret = sum();
//	cout << ret;
//	return 0;
//}