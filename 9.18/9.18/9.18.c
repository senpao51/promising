#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
//判断一个数是否是回文数
//int isPalinDrome(int x)
//{
//	int sum = 0;
//	if ((x < 0) || (x % 10 == 0 && x != 0))
//	{
//		return 0;
//	}
//	while (x > sum)
//	{
//		sum = sum*10 + x % 10;
//		x /= 10;
//	}
//	if (x == sum || x == sum /10)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int x = 99999;
//	int tmp = isPalinDrome(x);
//	printf("%d\n",tmp);
//	return 0;
//}

//最长公共前缀
//char* longestCommonPrefix(char* *str, int sz)
//{
//	assert(str);
//	int i = 0;
//	char *head = *(str + 1);
//	char *tail = *(str + 0);
//	char *tmp = *(str + 0);
//	char *com = NULL;
//	char *ret = NULL;
//	if (sz == 0)
//	{
//		return " ";
//	}
//	if (sz == 1)
//	{
//		return *(str + 0);
//	}
//	while (*head == *tail)
//	{
//		head++;
//		tail++;
//	}
//	for (i = 2; i < sz; i++)
//	{
//		com = *(str + i);
//		head = *(str + 0);
//		while (*head == *com)
//		{
//			head++;
//			com++;
//		}
//		if (head < tail)
//		{
//			tail = head;
//		}
//		if (tail == tmp)
//		{
//			return " ";
//		}
//	}
//	ret = (char*)malloc(sizeof(char)*(tail-tmp+1));
//	for (i = 0; i < tail - tmp; i++)
//	{
//		*(ret + i) = *(tmp+i);
//	}
//	*(ret + (tail - tmp)) = '\0';
//	return ret;
//}
//int main()
//{
//	char *p[] = {"flower","flow","float","flight"};
//	int sz = sizeof(p) / sizeof(p[0]);
//	char *ret = longestCommonPrefix(p, sz);
//	printf("%s\n",ret);
//	return 0;
//}

