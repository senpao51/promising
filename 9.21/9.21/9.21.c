#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

int is(int x)
{
	int sum = 0;
	if ((x < 0) || x % 10 == 0 && x != 0)
	{
		return -1;
	}
	while (x>sum)
	{
		sum = sum * 10 + x % 10;
		x /= 10;
	}
	return x == sum || x == sum / 10;
}
int main()
{
	int x = 1234321;
	int ret = is(x);
	if (ret == 1)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
}
