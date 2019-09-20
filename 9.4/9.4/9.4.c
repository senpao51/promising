#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("%d\n",sizeof(void*));
//	return 0;
//}

//int main()
//{
//	int* p;
//	*p = NULL;
//}

//int main()
//{
//	int* p = (int*)0x12ff7c;
//	*p = NULL;
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	char a[5] = { 'A', 'B', 'C', 'D' };
//	char(*p3)[10] = &a;
//	char(*p4)[10] = a;
//	return 0;
//}


//比特科技
////二维数组
//int a[3][4] = { 0 };
//printf("%d\n", sizeof(a));
//printf("%d\n", sizeof(a[0][0]));
//printf("%d\n", sizeof(a[0]));
//printf("%d\n", sizeof(a[0] + 1));
//printf("%d\n", sizeof(*(a[0] + 1)));
//printf("%d\n", sizeof(a + 1));
//printf("%d\n", sizeof(*(a + 1)));
//printf("%d\n", sizeof(&a[0] + 1));
//printf("%d\n", sizeof(*(&a[0] + 1)));
//printf("%d\n", sizeof(*a));
//printf("%d\n", sizeof(a[3]));
//总结： 数组名的意义：
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址。
//指针笔试题
//笔试题1：
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//程序的结果是什么？
//笔试题2
//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned char)p + 0x1);
//     printf("%p\n", (unsigned short*)p + 0x1);
//	return 0;
//}

//#include <stdlib.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}2,3

//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};
//	int *p;
//	p = a[0];
//	printf("%d\n",p[0]);
//	return 0;
//}

//void fun(char *p)
//{
//	char c = p[3];
//}
//int main()
//{
//	char *p2 = "abcdefg";
//	fun(p2);
//	return 0;
//}
//问题
#include <string.h>
#include <stdlib.h>
//void fun(char *p)
//{
//	p =(char*)malloc(100);
//}
//int main()
//{
//	char* str = NULL;
//	fun(str);
//	strcpy(str,"hello world");
//	return 0;
//}


//改法1
//void fun(char **p)
//{
//	*p = (char*)malloc(100);
//}
//int main()
//{
//	char* str = NULL;
//	fun(&str);
//	strcpy(str, "hello world");
//	printf("%s\n",str);
//  free(str);
//  str = NULL;
//	return 0;
//}


//改法2
//char* fun(char *p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//int main()
//{
//	char* str = NULL;
//	str = fun(str);
//	strcpy(str, "hello world");
//	printf("%s\n", str);
//	free(str);
//	str = NULL;
//	return 0;
//}


