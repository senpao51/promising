#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 1;
	int x = 0;
	int y = 0;
	int max = 0;
	int arr[10] = { 0 };
	while (a < 10)
	{
		scanf("%d", &arr[a]);
		a++;
	}
	x = arr[0];
	for (b = 1; b < 10; b++)
	{
		y = arr[b];
		if (x>y)
		{
			max = x;
		}
		else
		{
			 x=y;
		}
		
	}
	printf("%d",max);
	
	return 0;
}
