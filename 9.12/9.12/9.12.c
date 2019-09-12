#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int fun(int a, int b)
//{
//	if (a > b)
//		return(a + b);
//	else
//		return(a-b);
//}
//int main()
//{
//	int x = 3, y = 8, z = 6, r;
//	r = fun(fun(x,y),2*z);
//	printf("%d\n",r);
//	return 0;
//}


int f(int a)
{
	int b = 0;
	static int c = 3;
	a = c++, b++;
	return (a);
}
int main()
{
	int a = 2, i, k;
	for (i = 0; i < 2; i++)
	{
		k = f(a++);
	}
	printf("%d\n", k);
	return 0;
}