#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
// void Test1()
// {
//	 int arr[] = { 5, 4, 6, 2, 3, 9, 8, 7, 1, 0 };
//	 int sz = sizeof(arr) / sizeof(arr[0]);
//	 //bubble_sort(arr, sz);
//	 qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	 Print(arr, sz);
// }


 int cmp_stu_by_name(const void*e1, const void*e2)
 {
	 return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
 }

struct Stu
{
	 char name[20];
	 short age;
 };
 void Test2()
 {
	 struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 50 }, { "wangwu", 15 } };
	 int sz = sizeof(arr) / sizeof(arr[0]);
	 qsort(arr,sz,sizeof(arr[0]),cmp_stu_by_name);

 }




int main()
{
	//Test1();
	Test2();
	//Test3();
	return 0;
}