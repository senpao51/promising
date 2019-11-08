#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"

void PrintArr(int*arr, int left, int right)
{
	int i = 0;
	for (i = left; i <= right; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
SortMethods(int*arr, int left, int right)
{
	int i = 0;
	for (i = left; i <= right; i++)
	{
		if (arr[i] > arr[i + 1])
			Swap(&(arr[i]),&(arr[i+1]));
	}
}
void TwoWayInsertSort(int*arr, int left, int right)
{
	int i = 0;
	int start = 0;
	int final = 9;
	int bar[10] = { 0 };
	bar[0] = arr[left];
	for (i = left + 1; i <=right; i++)
	{
		if (arr[i] > bar[start])
			bar[start + 1] = arr[i];
		else if (arr[i] < bar[start] && start == 0)
			bar[final] = arr[i];

	}
}
