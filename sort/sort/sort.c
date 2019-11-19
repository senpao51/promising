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

void InsertSort(int*arr, int left, int right)
{
	for (int i = left+1; i <= right; i++)
	{
		int j = i;
		arr[0] = arr[j];
		while (arr[j] < arr[j - 1])
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = arr[0];
	}
}
void BubbleSort(int*arr, int left, int right)
{
	int n = right - left + 1;
	for (int i = left; i < n; i++)
	{
		for (int j = left; j < n - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
				Swap(&arr[j],&arr[j+1]);
		}
	}
}
//二路插入排序
void TwoWayInsertSort(int*arr, int left, int right)
{
	int n = right - left + 1;
	int* tmp = (int*)malloc(sizeof(int)*n);
	int first, final;
	tmp[0] = arr[left];
	first = final = 0;
	for (int i = left + 1; i <= right; i++)
	{
		if (arr[i] <tmp[first])
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
				tmp[(end - 1 + n) % n] = tmp[end];
				end = (end + 1) % n;
			}
			tmp[(end-1+n)%n] = arr[i];
			first = (first - 1 + n) % n;
		}
	}
	int i = 0;
	for (int k = first; i< n;)
	{
		arr[i++] = tmp[k];
		k = (k + 1) % n;
	}
	free(tmp);
	tmp = NULL;
}

//希尔排序
int dlta[] = { 5, 3, 2, 1 };
void  _ShellSort(int*arr, int left, int right, int gap)
{
	for (int i = left; i <=right - gap; i++)
	{
		int end = i;
		int tmp = arr[end+gap];
		while (end>=left&&tmp < arr[end])
		{
			arr[end + gap] = arr[end];
			end -= gap;
		}
		arr[end + gap] = tmp;
	}
}

void ShellSort(int*arr, int left, int right)
{
	int n = sizeof(dlta) / sizeof(dlta[0]);
	for (int i = 0; i < n; i++)
	{
		_ShellSort(arr,left,right,dlta[i]);
	}
}


//选择排序
int GetMinIndex(int*arr, int left, int right)
{
	int index = left;
	for (int i = left + 1; i <= right; i++)
	{
		if (arr[i] <arr[index])
		{
			index = i;
		}
	}
	return index;
}
void SelectSort(int*arr, int left, int right)
{
	for (int i = left; i <right; i++)
	{
		int index = GetMinIndex(arr,i,right);
		if (index != i)
		{
			Swap(&arr[index],&arr[i]);
		}
	}
}

//堆排
void _AdjustDown(int*arr, int left, int right, int start)
{
	int n = right - left + 1;
	int i = start;
	int j = 2 * i + 1;
	while (j<n)
	{
		if (j + 1 < n&&arr[j] < arr[j + 1])
			j++;
		if (arr[i] < arr[j])
		{
			Swap(&arr[i], &arr[j]);
			i = j;
			j = 2 * i + 1;
		}
		else
			break;
	}
}
void HeapSort(int*arr, int left, int right)
{
	int n = right - left + 1;
	int cur = n / 2 - 1;
	while (cur >= 0)
	{
		_AdjustDown(arr,left,right,cur);
		cur--;
	}
	int end = right;
	while (end >left)
	{
		Swap(&arr[0],&arr[end]);
		end--;
		_AdjustDown(arr,left,end,0);
	}
}

//快排
//int _Partition_1(int*arr, int left, int right)//交换数值
//{
//	int key = arr[left];
//	while (left < right)
//	{
//		while (left<right&&arr[right]>=key)
//			right--;
//		Swap(&arr[right], &arr[left]);
//		while (left<right&&arr[left] < key)
//			left++;
//		Swap(&arr[right],&arr[left]);
//	}
//	return left;
//}
//
int _Partition_2(int*arr, int left, int right)
{
	int key = arr[left];
	while (left < right)
	{
		while (left<right&&arr[right] >= key)
			right--;
		arr[left] = arr[right];
		while (left<right&&arr[left] < key)
			left++;
		arr[right]= arr[left];
	}
	arr[left] = key;
	return left;
}
//
//int _Partition_3(int*arr, int left, int right)//前后指针法
//{
//	int pos = left;
//	int key = arr[left];
//	for (int i = left + 1; i <= right; i++)
//	{
//		if (arr[i] < key)
//		{
//			pos++;
//			if (pos != i)
//				Swap(&arr[pos],&arr[i]);
//		}
//	}
//	Swap(&arr[left],&arr[pos]);
//	return pos;
//}
int _Partition_1(int*arr, int left, int right)
{
	int mid = left + (right - left) / 2;
	while (left < right)
	{
		while (left<right&&arr[left] <arr[mid])
			left++;
		Swap(&arr[left],&arr[mid]);
		while (left<right&&arr[right]>arr[mid])
			right--;
		Swap(&arr[right],&arr[mid]);
	}
	return mid;
}
void QuickSort(int*arr, int left, int right)
{
	if (left >=right)
		return;
	//int pos = _Partition_1(arr, left, right);
	int pos = _Partition_2(arr, left, right);
	QuickSort(arr, left, pos);
	QuickSort(arr, pos + 1, right);
}

//归并排序
void _MergeSort(int*arr, int left, int right, int* tmp)
{
	if (left >= right)
		return;
	int mid = left + (right - left) / 2;
	_MergeSort(arr, left, mid, tmp);
	_MergeSort(arr, mid+1,right, tmp);
	int begin1, end1, begin2, end2, i;
	begin1 = left, end1 = mid;
	begin2 = mid + 1, end2 = right;
	i = left;
	while (begin1 <= end1&&begin2 <= end2)
	{
		if (arr[begin1] < arr[begin2])
			tmp[i++] = arr[begin1++];
		else
			tmp[i++] = arr[begin2++];
	}
	while (begin1 <=end1)
		tmp[i++] = arr[begin1++];
	while (begin2 <=end2)
		tmp[i++] = arr[begin2++];
	memcpy(arr+left,tmp+left,sizeof(int)*(right-left+1));
}
void MergeSort(int*arr, int left, int right)
{
	int n = right - left + 1;
	int*tmp = (int*)malloc(sizeof(int)*n);
	_MergeSort(arr,left,right,tmp);
	free(tmp);
	tmp = NULL;
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