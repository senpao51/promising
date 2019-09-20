#define _CRT_SECURE_NO_WARNINGS 1
//1.计算1！+2！+3！+...+10!
//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		n *= i;
//		sum += n;
//	}
//	printf("%d ",sum);
//	return 0;
//}
//
//2.0-999的水仙花数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int num = 0;
//	for (num = 0; num < 1000; num++)
//	{
//		int bai = num / 100;
//		int shi = (num - bai * 100) / 10;
//		int ge = num - bai * 100 - shi * 10;
//		if (num == pow(ge, 3) + pow(shi, 3) + pow(bai, 3))
//			printf("%d ",num);
//	}
//	return 0;
//}
//3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
//例如：2 + 22 + 222 + 2222 + 22222
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int sum = 0;
//	again:
//	scanf("%d",&a);
//	while (a >= 0 && a<= 9)
//	{
//		for (b = 0; b < 5; b++)
//		{
//			c+= (int)pow(10, b);
//			d = a*c;
//			sum += d;
//		}
//		printf("sum=%d", sum);
//		break;
//	}
//	printf("请重新输入\n");
//	goto again;
//	return 0;
//}

//输入菱形，1-13-1的*
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (a = 0; a < 7; a++)
//	{
//		for (b = a; b <6; b++)
//		{
//			printf(" ");
//		}
//		for (c = 0; c < a * 2 + 1; c++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (a = 6; a >0; a--)
//	{
//		for (b =a ;b<7; b++)
//		{
//			printf(" ");
//		}
//		for (c = 0; c < a * 2 - 1; c++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
