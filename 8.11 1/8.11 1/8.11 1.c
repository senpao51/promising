#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d",&a,&b);
	c= a;
	a= b;
	printf("%d %d",a,c); 
	return 0;
}