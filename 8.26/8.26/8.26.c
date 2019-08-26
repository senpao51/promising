#define _CRT_SECURE_NO_WARNINGS 1

 /*1.实现strcpy
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char*dest,const char*str)
{
	char* ret = dest;
	assert(dest&&str);
	while (*dest++ = *str++)
	{
		;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	char arr[20] = {0};
	my_strcpy(arr, "senpaolove");
	printf("%s\n",arr);
	return 0;
}
2.实现strcat
#include <stdio.h>
#include <assert.h>
char* my_strcat(char*dest,const char*scr)
{
	assert(dest&&scr);
	char*ret = dest;
	while (*dest)
	{
		*dest++;
	}
	while (*dest++ = *scr++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr[20] = "senpao";
	my_strcat(arr, "love");
	printf("%s\n",arr);
	return 0;
}
3.实现strstr
#include <stdio.h>
char* my_strstr(const char *s1, const char *s2)
{
	const char* p1 = s1;
	const char* p2 = s2;
	const char* start = p1;
	while (*start)
	{
		p1 = start;
		while (*p1&&*p1 == *p2)
		{
			*p1++;
			*p2++;
		}
		if (*p2 == '\0')
		{
			return start;
		}
		start++;
		p2 = s2;
	}
	return NULL;
}

int main()
{
	char arr1[20] = "senpaolove";
	char arr2[10] = "paolo";
	char*ret=my_strstr(arr1,arr2);
	if (ret != NULL)
	{
		printf("%s\n", ret);
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}
4.实现strchr
#include <stdio.h>
char* my_strchr(const char* p, char s)
{
	while (*p != s )
	{
		*p++;
	}
	if (*p == s )
	{
		return p;
	}
	else
	{
		return NULL;
	}
}
int main()
{
	char arr[20] = "wangyifei1564165";
	char*ret = my_strchr(arr, '5');
	if (ret != NULL)
	{
		printf("%s\n",ret);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}
5.实现strcmp
#include <stdio.h>
#include <assert.h>
int my_strcmp(const char*p1, const char*p2)
{
	assert(p1&&p2);
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
			return 0;
		*p1++;
		*p2++;
	}
	return *p1 - *p2;
}
int main()
{
	char arr1[10] = "senpaolove";
	char arr2[10] = "senpaoevil";
	int ret = my_strcmp(arr1, arr2);
	if (ret > 0)
	{
		printf("大于\n");
	}
	else if (ret < 0)
	{
		printf("小于\n");
	}
	else
	{
		printf("相等\n");
	}
	return 0;
}
6.实现memcpy
#include <stdio.h>
#include <assert.h>
void* my_memcpy(void* dest, const void* sou, unsigned int count)
{
	char* ret = dest;
	assert(dest&&sou);
	while (count)
	{
		*(char*)dest = *(char*)sou;
		((char*)dest)++;
		((char*)sou)++;
		count--;
	}
	return ret;
}
int main()
{
	char sou[10] = "abcdef";
	char dest[10] = { 0 };
	char* ret =my_memcpy(dest, sou, 5*sizeof(char));
	printf("%s\n",ret);
	return 0;
}
7.实现memmove
#include <stdio.h>
#include <assert.h>
void* my_memmove(void* dest, const void* sou, unsigned int count)
{
	char* ret = dest;
	char tmp = '0';
	assert(dest&&sou);
	while (count)
	{
		tmp= *(char*)sou;
		*(char*)sou = *(char*)dest;
		*(char*)dest = tmp;
		((char*)dest)++;
		((char*)sou)++;
		count--;
	}
	return ret;

}
int main()
{
	char arr1[10] = "abcdef";
	char arr2[10] = { 0 };
	char* ret = my_memmove(arr2, arr1, 5* sizeof(char));
	printf("%s\n",ret);
	return 0;
}*/
