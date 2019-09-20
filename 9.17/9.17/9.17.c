#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//整数翻转
//int reverse(int x)
//{
//	int a = 0;
//	long long sum = 0;
//	int i = 0;
//	for (i = 0; i<20;i++)
//	{
//		a = x % 10;
//		x = x / 10;
//		sum = a + sum * 10;
//		if (sum > 0x7fffffff || sum < (signed int)0x80000000)
//		{
//			return 0;
//		}
//		if (0 == x)
//		{
//			break;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	signed int x = -1234564512;
//	int ret = reverse(x);
//	printf("%d\n",ret);
//	return 0;
//}

//回文数 例如121 是回文数；123 不是回文数。
//int ispalindrome(int x)
//{
//	int a = 0;
//	int sum = 0;
//	int tmp = x;
//	if (x < 0)
//	{
//		return -1;
//	}
//	while (x)
//	{
//		a = x % 10;
//		x = x / 10;
//		sum = a + sum * 10;
//	}
//	if (sum == tmp)
//	{
//		return 0;
//	}
//	return -1;
//}
//int main()
//{
//	int x = -121;
//	int ret = ispalindrome(x);
//	if (0 == ret)
//		printf("true");
//	else
//		printf("false");
//	return 0;
//}

char* longestCommonPrefix(char** src, int sz)
{
	int i = 0;
	char *ret = NULL;
	for (i = 0; i < 10;i++)
	{
		int j = 0;
		for (j = 0; j < sz; j++)
		{
			if (*(src[j] + i) != *(src[j + 1] + i))
			{
				ret = src[j] + i;
				break;
			}
		}
		break;
	}
	return ret;
}
int main()
{
	char* arr[] = { "flower", "floq","float"};
	int sz = sizeof(arr) / sizeof(arr[0]);
	char*ret = longestCommonPrefix(arr,sz);
	printf("%s\n",ret);
	return 0;
}