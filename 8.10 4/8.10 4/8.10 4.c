#include<stdio.h>
int main()
{
	int a = 100;
	int b = 2;
	for (a = 100; a <= 200; a++)
	{
		for (b = 2; b < a; b++)
		{
			if (a%b==0)
			{
				break;
			}
		}
		   if (a==b)
			printf("%d ", a);
	}
	return 0;
}