#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int change(int* x,int* y)
{
	int c = 0;
	c = *x;
	*x = *y;
	*y = c;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b); 
	change(&a,&b);
	printf("%d %d",a ,b );
	return 0;
}