#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int min = 0;
	scanf("%d %d",&a,&b);
	min = (a<=b?a:b);
	for (c =min; c>0; c--)
	{
		if (a%c ==0&& b%c==0)
		{
			break;
		}
	}
	printf("%d", c);
	return 0;
}
