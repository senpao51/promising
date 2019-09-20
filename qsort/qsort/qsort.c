#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
////模仿qsort函数功能实现各种各样数据的冒泡排序
//void Swap(char* p1, char* p2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *(p1+i);
//		*(p1+i) = *(p2+i);
//		*(p2+i) = tmp;
//	}
//}
//void my_bubblesort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i<sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + width*j, (char*)base + (j + 1)*width)>0)
//			{
//				Swap((char*)base + width*j, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
////整形数组的冒泡排序
//void Print1(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//
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
//	 //qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	 my_bubblesort(arr, sz, sizeof(arr[0]), cmp_int);
//	 Print1(arr, sz);
// }
////结构体数据的排序
//struct stu
//{
//	char name[20];
//	short age;
//};
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int cmp_stu_by_age(const void*e1, const void*e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void Test2()
//{
//	struct stu arr[] = { { "zhangsan", 20 }, { "lisi", 50 }, { "wangwu", 15 } };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	//my_bubblesort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	my_bubblesort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//
//}
////字符数组的排序
//int com_str(const void* e1,const void* e2)
//{
//	return strcmp((char*)e1,(char*)e2);
//}
//void Print2(char arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ",arr[i]);
//	}
//}
//void Test3()
//{
//	char arr[] = "zyxdcfeac";
//	int sz =strlen(arr);
//	//qsort(arr, sz, sizeof(arr[0]), com_str);
//	my_bubblesort(arr, sz, sizeof(arr[0]), com_str);
//	Print2(arr, sz);
//}
//
//
//int main()
//{
//	//Test1();
//	//Test2();
//	//Test3();
//	return 0;
//}
