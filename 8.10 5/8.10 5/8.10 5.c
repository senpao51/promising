#include<stdio.h>
int mian()
{
	int a = 1;
	int b = 1;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
			printf("%d*%d=%d ", a, b, a*b);
		printf("\n");
	}
	return 0;
}
