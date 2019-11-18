#define _CRT_SECURE_NO_WARNINGS 1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
#include "sort.h"
int main()
{
	int arr[] = {5, 3, 9, 8,6,2,4,7, 1,0 };
	//int arr[] = {278,109,63,930,589,184,505,269,8,83};
	int n = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = n - 1;
	PrintArr(arr,0,n-1);
	//InsertSort(arr,1,right);
	//BubbleSort(arr, left, right);
	//PrintArr(arr, 0, n - 1);
	//TwoWayInsertSort(arr,left,right);
	//ShellSort(arr, left, right);
	//SelectSort(arr,left,right);
	//HeapSort(arr,left,right);
	//QuickSort(arr,left,right);
	//MergeSort(arr,left,right);
	//RadixSort(arr,left,right);
	PrintArr(arr, 0, n - 1);

	return 0;
}