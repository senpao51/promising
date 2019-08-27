#define _CRT_SECURE_NO_WARNINGS 1
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//#include <stdio.h>
//#include <string.h>
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		int i = 0;
//		char ch = arr[0];
//		for (i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[len - 1] = ch;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n",arr);
//	return 0;
//}

//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
#include <stdio.h>
#include <string.h>
int is_left_move(char arr1[], char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	char* ret = NULL;
	if (len1 != len2)
		return 0;
	strncat(arr1, arr1,len1);
	ret = strstr(arr1,arr2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[20] = "AABCD";
	char arr2[20] = "BCDAA";
	int ret = is_left_move(arr1,arr2);
	if (1 == ret)
	{
		printf("是\n");
	}
	else
	{
		printf("不是\n");
	}
	return 0;
}
