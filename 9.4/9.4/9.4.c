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


//���ؿƼ�
////��ά����
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
//�ܽ᣺ �����������壺
//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
//2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ��
//3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��
//ָ�������
//������1��
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//����Ľ����ʲô��
//������2
//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
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
//����
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


//�ķ�1
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


//�ķ�2
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


