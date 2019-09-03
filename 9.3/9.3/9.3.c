#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//static int j;
//void fun1()
//{
//	static int i = 0;
//	i++;
//}
//void fun2()
//{
//	j = 0;
//	j++;
//}
//int main()
//{
//	int k = 0;
//	for (k = 0; k < 10; k++)
//	{
//		fun1();
//		fun2();
//	}
//	return 0;
//}
//int main()
//{
//	char *p = NULL;
//	printf("%d\n",sizeof(p));
//	printf("%d\n", sizeof(*p));
//
//	return 0;
//}
//int main()
//{
//	int a[100] = { 0 };
//	printf("%d\n",sizeof(a));//整个数组的大小
//	printf("%d\n",sizeof(a[0]));//数组里第一个元素的大小
//	printf("%d\n",sizeof(&a));//计算的是第一个元素的地址的大小
//	printf("%d\n",sizeof(&a[99]));//计算的数组第100个元素的地址的大小
//	printf("%p\n",&a);//取出整个数组的地址(整个数组的地址由第一个元素的地址表示而已)
//	printf("%p\n",&a[0]);//首元素的地址
//	printf("%p\n",a);//首元素的地址         //## 这两个等价
//	printf("%p\n",&a+1);//+1：跳过整个数组
//	printf("%p\n",&a[0]+1);//+1：跳过一个元素
//	printf("%p\n",a+1);//+1：跳过一个元素
//	return 0;
//}

//函数传数组名==传首元素的地址
//void fun(int b[])
//{
//	printf("%d\n",*(b+1));
//}
//int main()
//{
//	int b[100] = { 1, 3, 5, 7, 9, 11 };
//	fun(b);
//	return 0;
//}

//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u ",i);
//		Sleep(1000);
//	}
//	return 0;
//}
//int main()
//{
//	printf("%2f\n",10000000000.00+0.000000000001);
//}
//struct s1
//{
//	int a;
//	char b;
//	double c;
//};
//struct s2
//{
//	int d;
//	struct s1 e;               
//    int f;                      
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s2));
//	return 0;
//}
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr1 = (int*)(&a+1);
	int *ptr2 = (int*)((int)a + 1);
	printf("%x %x",ptr1[-1],*ptr2);
}

//question
//enum COLOR
//{
//	GREEN = 1,
//	RED,
//	BLUE,
//	GREEN_RED = 10,
//	GREEN_BLUE
//}COLORVAL;
//int main()
//{
//	printf("%d\n",sizeof(COLORVAL));
//	return 0;
//}

//#define a int[10]
//int main()
//{
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 0, printf("first=%d", i);
//		i < 10, printf("second=%d", i);
//		i++, printf("third=%d", i))
//	{
//		printf("four;th=%d",i);
//	}
//	return 0;
//}

//int check()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int check()
//{
//	union
//	{
//		char a;
//		int c;
//	}u;
//	u.c = 1;
//	return u.a;
//}
//int main()
//{
//	int ret = check();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
