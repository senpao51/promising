#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void printsum(int*data, int m, int n, int start, int sum)
{
	if (m == 0)
	{
		printf("%d\n",sum);
		return;
	}
	int i = 0;
	for (i = start; i < n; i++)
	{
		printsum(data,m-1,n,i+1,sum+data[i]);
	}
}
int main()
{
	int m, n, i;
	int data[30] = { 0 };
	scanf("%d %d",&n,&m);
	for (i = 0; i < n; i++)
	{
		scanf("%d",&data[i]);
	}
	printsum(data,m,n,0,0);
	return 0;
}
