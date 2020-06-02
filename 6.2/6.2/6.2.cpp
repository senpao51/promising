#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include<stdio.h>
int main()
{
	int i, n, num[100001];
	num[0] = 1;
	num[1] = 1;
	for (i = 2; i <= 100000; i++)
	{
		num[i] = num[i - 1] + num[i - 2];
		num[i] = num[i] % 1000000;
	}
	while (scanf("%d", &n) != -1)
	{
		if (n<29)
			printf("%d\n", num[n]);
		else
			printf("%06d\n", num[n]);
	}
	return 0;
}
//int main()
//{
//	int a = 120000000;
//	printf("%06ld\n",a);
//	return 0;
//}
//int Fib(int n)
//{
//	if (n == 1 || n == 2 || n == 3)
//		return n;
//	int a = 2;
//	int b = 3;
//	int c = 0;
//	for (int i = 0; i<n - 3; i++)
//	{
//		c = (a + b) % 100000;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int tmp = Fib(n);
//		if (tmp<100000)
//			cout << tmp << endl;
//		else
//			printf("%6d\n", tmp);
//	}
//	return 0;
//}