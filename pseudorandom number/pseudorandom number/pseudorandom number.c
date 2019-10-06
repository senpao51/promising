#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	srand((unsigned)time(NULL));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int tmp = rand()%100;
		printf("%d ",tmp);
	}
	return 0;
}

