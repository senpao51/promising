 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	printf("%p\n", 0x13 & 0x17);
//	printf("%p\n", 0x13 | 0x17);
//	return 0;
//}


//int main()
//{
//	int arr[][3] = {0};
//	return 0;
//}

//int main()
//{
//	char str[10];
//	str = "string";//错误
//	return 0;
//}


//int main()
//{
//	const char *p = "Hello!";
//	printf("%c\n",*p);
//	return 0;
//}


//要求写一个函数，将字符串中的字符的空格替换成%20。
void replace(char* p)
{
	int blank = 0;
	int len1 = 0;
	int len2 = 0;
	int before = 0;
	int after = 0;
	while (p[len1] != '\0')
	{
		if (p[len1] == ' ')
		{
			blank++;
		}
		len1++;
	}
	len2 = len1 + 2 * blank;
	before = len1 - 1;
	after = len2 - 1;
	while (before != 0)
	{
		if (p[before] == ' ')
		{
			p[after] = '0';
			p[after-1] = '2';
			p[after-2] = '%';
			after -= 2;
		}
		else
		{
			p[after] = p[before];
		}
		after--;
		before--;
	}
}
int main()
{
	char arr[30] = "abc defgx yz";
	replace(arr);
	printf("%s\n",arr);
	return 0;
}


