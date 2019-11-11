#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"
void Swap(int*a, int*b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
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
	for (i = left; i < right; i++)
	{
		int j = 0;
		for (j = left; j<right -i- 1; i++)
		{
			if (arr[j] > arr[j + 1])
				Swap(&(arr[j]), &(arr[j + 1]));
		}
	}
}
void TwoWayInsertSort(int*arr, int left, int right)
{
	int k = 0;
	int n = right - left + 1;
	int*tmp = (int*)malloc(sizeof(int)*n);
	int first=0, final=0;
	tmp[0] = arr[left];
	for (int i = left + 1; i <= right; i++)
	{
		if (arr[i] < tmp[first])
		{
			first = (first - 1 + n) % n;
			tmp[first] = arr[i];
		}
		else if (arr[i]>tmp[final])
			tmp[++final] = arr[i];
		else
		{
			int end = final;
			while (arr[i] < tmp[end])
			{
				tmp[(end + 1)%n] = tmp[end];
				end = (end - 1 + n) % n;
			}
			tmp[(end + 1) % n] = arr[i];
			final++;
		}
	}
	for (int i = first; k<n;k++)
	{
		arr[k] = tmp[i];
		i = (i + 1) % n;
	}
	free(tmp);
	tmp = NULL;
}

//Ï£¶ûÅÅÐò
void  _ShellSort(int*arr, int left, int right, int gap)
{
	for (int i = left + 1; i <= right-gap; i++)
	{
		int end = i;
		int tmp = arr[end + gap];
		while (end>=left&&tmp<arr[end])
		{
			arr[end + gap] = arr[end];
			end -= gap;
		}
		arr[end + gap] = tmp;
	}
}
int dlta[] = {5,3,2,1};
void ShellSort(int*arr, int left, int right)
{
	int n = sizeof(dlta) / sizeof(dlta[0]);
	for (int i = 0; i < n; i++)
	{
		_ShellSort(arr,left,right,dlta[i]);
	}
}


int GetMinIndex(int*arr, int left, int right)
{
	int min = arr[left];
	int index = min;
	for (int i = left + 1; i <= right;i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
	}
	return index;
}
void SelectSort(int*arr, int left, int right)
{
	for (int i = left; i < right; i++)
	{
		int index = GetMinIndex(arr, left,right);
		if (index != i)
		{
			Swap(&arr[i],&arr[index]);
		}
	}
}

#define K 3
void RadixSort(int*arr, int left, int right)
{
	for (int i = 0; i < K; i++)
	{

	}
}