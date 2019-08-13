#include<stdio.h>
int main()
{
	int year;
	for (year = 1000; year <= 2000; year++)
	if (year%100==0&&year%400==0)
	{
		printf("%d\n",year);
	}
	   else if (year%100!==0&&year%4==0)
		printf("%d\n", year);
	return 0;
}