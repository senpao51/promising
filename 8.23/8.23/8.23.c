#define _CRT_SECURE_NO_WARNINGS 1
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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

//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
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
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}
	return 0;
}
