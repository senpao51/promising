 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
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
//	str = "string";//´íÎó
//	return 0;
//}


//int main()
//{
//	const char *p = "Hello!";
//	printf("%c\n",*p);
//	return 0;
//}

char* Replace(char p[])
{
	char* ret = p;
	int i = 0;
	while (*(p+i) != '\0')
	{
		if (*(p+i) == ' ')
		{
			char x = *(p + i + 1);
			char y = *(p + i + 2);
			*(p+i) = '%';
			*(p + i + 1) = '2';
			*(p + i + 2) = '0';

		}
	}
	return ret;
}
int main()
{
	char arr[30] = "abc defgx yz";
	char* ret = Replace(arr);
	printf("%s\n",ret);
	return 0;
}