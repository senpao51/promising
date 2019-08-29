#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//模拟实现strncpy
//char* my_strncpy(char* dest, const char* source, int num)
//{
//	int i = 0;
//	int sz = strlen(source);
//	char* ret = dest;
//	assert(dest&&source);
//	for (i = 0; i < num; i++)
//	{
//		*(dest + i) = *(source + i);
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "senpaolove";
//	char arr2[20] = { 0 };
//	char*ret = my_strncpy(arr2, arr1, 15);
//	printf("%s\n",ret);
//	return 0;
//}





//模拟实现strncat
//char* my_strncat(char* dest, const char* source, int num)
//{
//	int i = 0;
//	int sz = strlen(dest);
//	char* ret = dest;
//	assert(dest&&source);
//	for (i = 0; i < sz; i++)
//	{
//		dest++;
//	}
//	for (i = 0; i < num; i++)
//	{
//		*(dest + i) = *(source + i);
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "senpao";
//	char arr2[20] = "love";
//	char* ret = my_strncat(arr1, arr2, 4);
//	printf("%s\n",ret);
//	return 0;
//}




//模拟strncmp
//int my_strncmp(char* str1, char* str2, int num)
//{
//	int ret = 0;
//	int i = 0;
//	assert(str1&&str2);
//	for (i = 0; i < num; i++)
//	{
//		if (*(str1 + i) != *(str2 + i))
//		{
//			return *(str1 + i) - *(str2 + i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "senpaolove";
//	char arr2[20] = "senpaoevil";
//	int ret = my_strncmp(arr1, arr2,7);
//	if (ret < 0)
//	{
//		printf("小于\n");
//	}
//	else if (ret>0)
//	{
//		printf("大于\n");
//	}
//	else
//	{
//		printf("等于\n");
//	}
//	return 0;
//}