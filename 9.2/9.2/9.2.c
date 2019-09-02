#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <stddef.h>
//struct s
//{
//	char a;
//	int b;
//	char c;
//};
//#define OFFSETOF(s,m)   (int)&(((s*)0)->m)
//int main()
//{
//	printf("%d\n", OFFSETOF(struct s, a));
//	printf("%d\n", OFFSETOF(struct s, b));
//	printf("%d\n", OFFSETOF(struct s, c));
//	return 0;
//}
//struct a
//{
//	int a : 2;
//	int b : 4;
//	int c : 5;
//	int d : 30;
//};
//int main()
//{
//	printf("%d\n",sizeof(struct a));
//	return 0;
//}
//enum day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	enum day a = Mon;
//	printf("%d\n",a);
//	return 0;
//}
//union s
//{
//	int a;
//	char b;
//};
//int main()
//{
//	union s c;
//	printf("%p\n",&(c.a));
//	printf("%p\n", &(c.b));
//
//	return 0;
//}
//union s1
//{
//	char c[5];
//	int b;
//};
//union s2
//{
//	short d[7];
//	int e;
//};
//int main()
//{
//	printf("%d\n",sizeof(union s1));
//	printf("%d\n", sizeof(union s2));
//	return 0;
//}
//int main()
//{
//	short a[7];
//	int sz = sizeof(a) / sizeof(a[0]);
//	printf("%d\n",sz);
//	return 0;
//}
int check()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = check();
	if (1 == ret)
	{
		printf("Ð¡¶Ë\n");
	}
	else
	{
		printf("´ó¶Ë\n");
	}
	return 0;
}