#define _CRT_SECURE_NO_WARNINGS 1
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//#include <stdio.h>
//void chengfa(int n)
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a < n + 1; a++)
//	{
//		for (b = 1; b < a + 1; b++)
//		{
//			printf("%d*%d=%d ",a,b,a*b);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d",&num);
//	chengfa(num);
//	return 0;
//}
//2.使用函数实现两个数的交换。
//#include <stdio.h>
//int change(int* x, int* y)
//{
//	int z = *x;
//	*x = *y;
//	*y = z;
//	return *x;
//	return *y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	change(&a,&b);
//	printf("%d %d",a,b);
//	return 0;
//}
//3.实现一个函数判断year是不是闰年
//#include <stdio.h>
//int ifleap(int a)
//{
//	if (a % 100 != 0 && a % 4 == 0 || a % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	int x = 0;
//	scanf("%d",&year);
//	x = ifleap(year);
//	if (x == 1)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//#include <stdio.h>
//int init(int arr[],int arr3[],int x)
//{
//	int i = 0;
//	int *p1 = arr;
//	int *p2 = arr3;
//	for (i = 0; i < x; i++)
//	{
//		arr[i] = arr3[i];
//	}
//	return arr;
//}
//int main()
//{
//	int arr1[] = {6,7,8,9,0};
//	int arr2[] = {1,2,3,4,5}
//	int a = 0;
//	int b = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	a = init(arr1,arr2,sz);
//	if (1)
//	{
//		printf("%d",arr1[b]);
//	}
//	return 0;
//}
//5.实现一个函数，判断一个数是不是素数。
//#include <stdio.h>
//#include<math.h>
//int ifprime(int a)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(a); i++)
//	{
//		if (0 == a%i)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int x = 0;
//	scanf("%d",&num);
//	x = ifprime(num);
//	if (x == 1)
//		printf("不是素数\n");
//	else
//		printf("是素数\n");
//	return 0;
//}
//找数字
#include <stdio.h>
int find(int arr[], int a, int b)
{
	int left = 0;
	int right = b - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (a> arr[mid])
			left = mid + 1;
		else if(a < arr[mid])
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int input = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d",&input);
	int num = find(arr,input,sz);
	if (-1 == num)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了，下标是%d",num);
	}
	return 0;
}