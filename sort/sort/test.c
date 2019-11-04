#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"
int main()
{
	int arr[] = {5, 3, 9, 8,6,2,4,7, 1,0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = n - 1;
	TwoWayInsertSort(arr,left,right);
	return 0;
}