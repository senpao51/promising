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
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void SortMethods(int*arr, int left, int right)
{
	int i = 0;
	for (i = left; i < right; i++)
	{
		int j = 0;
		for (j = left; j<=right -i-1; j++)
		{
			if (arr[j] > arr[j + 1])
				Swap(&(arr[j]), &(arr[j + 1]));
		}
	}
}
//∂˛¬∑≤Â»Î≈≈–Ú
void TwoWayInsertSort(int*arr, int left, int right)
{
	int n = right - left + 1;
	int*tmp = (int*)malloc(sizeof(int)*n);
	int first = 0, final = 0;
	int i=0,k = 0;
	tmp[0] = arr[left];
	for (i = left + 1; i <= right; i++)
	{
		if (arr[i] < tmp[first])
		{
			first = (first - 1 + n) % n;
			tmp[first] = arr[i];
		}
		else if (arr[i]>tmp[final])
		{
			tmp[++final] = arr[i];
		}
		else
		{
			int end = first;
			while (arr[i] > tmp[end])
			{
				tmp[(end-1+n)%n] = tmp[end];
				end = (end+1) % n;
			}
			tmp[(end - 1 + n) % n] = arr[i];
			first = (first - 1 + n) % n;
		}
	}
	for (i = first; k < n;)
	{
		arr[k++] = tmp[i];
		i = (i + 1) % n;
	}
	free(tmp);
	tmp = NULL;
}

//œ£∂˚≈≈–Ú
void  _ShellSort(int*arr, int left, int right, int gap)
{
	for (int i = left ; i <= right-gap; i++)
	{
		int end = i;
		int tmp = arr[end + gap];
		while (end >=left&&tmp < arr[end])
		{
			arr[end + gap] = arr[end];
			end = end - gap;
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
	int index = left;
	int i = left;
	while (i <= right)
	{
		if (min > arr[i])
		{
			min = arr[i];
			index = i;
		}
		i++;
	}
	return index;
}
void SelectSort(int*arr, int left, int right)
{
	for (int i = left; i <= right; i++)
	{
		int index = GetMinIndex(arr,i,right);
		if (index != i)
		{
			Swap(&(arr[index]),&(arr[i]));
		}
	}
}
#include "slist.h"
#define K 3
#define RADIX 10
Slist mylist[RADIX];

int GetKey(int data, int k)
{
	int key = 0;
	while (k--)
	{
		key = data % 10;
		data /= 10;
	}
	return key;
}
void Distribute(int* arr, int left, int right, int k)
{
	for (int i = left; i <= right; i++)
	{
		int key = GetKey(arr[i],k);
		SlistPushBack(&mylist[key],arr[i]);
	}
}

void Collect(int*arr)
{
	int k = 0;
	for (int i = 0; i < RADIX; i++)
	{
		if (!SlistEmpty(&mylist[i]))
		{
			SlistNode* p= mylist[i].first->next;
			while (p != NULL)
			{
				arr[k++] = p->data;
				p = p->next;
			}
		}
	}
	for (int i = 0; i < RADIX; i++)
	{
		SlistClear(&mylist[i]);
	}
}
void RadixSort(int*arr, int left, int right)
{
	for (int i =0; i < RADIX; i++)
	{
		SlistInit(&mylist[i]);
	}
	for (int i = 1; i < K+1; i++)
	{
		Distribute(arr,left,right,i);
		Collect(arr);
	}
}