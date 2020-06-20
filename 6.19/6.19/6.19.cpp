#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	long long a = 201801094113;
	for (int i = 0; i < 32; i++)
	{
		if (i % 4 == 0&&i!=0)
			printf(" ");
		int c = a & 1;
		printf("%d", c);
		a >>= 1;
	}
	return 0;
}