#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b == c)
	{
		printf("%d %d %d", a,b,c);
	}
	if (a>=b)
	{
		if (a >= c)
		{
			if (b >= c)
			{
				printf("%d %d %d",a,b,c);
			}
			else
			{
				printf("%d %d %d",a,c,b);
			}
		}
		else
		{
			printf("%d %d %d",c,a,b);
		}
	}
	else
	{
		if (b >= c)
		{
			if (a >= c)
			{
				printf("%d %d %d",b,a,c);
			}
			else
			{
				printf("%d %d %d", b,c,a);
			}
		}
		else
		{
			printf("%d %d %d",c,b,a);
		}
	}
	
	return 0;
}

