#define _CRT_SECURE_NO_WARNINGS 1
//玩游戏，猜数字
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("0.玩游戏  \n");
//	printf("1.退出程序\n");
//}
//void game()
//{
//	int rad = 0;
//	rad = rand()%1000+1;
//	int num = 0;
//	while (1)
//	{
//		printf("请输入要猜的数字\n");
//		scanf("%d", &num);
//		if (num > rad)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < rad)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	srand((unsigned int)(time(NULL)));
//	while (a ==0 )
//	{
//		printf("请选择\n");
//		menu();
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 0:
//			game();
//			break;
//		case 1:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("重新输入\n");
//			break;
//		}
//	}
//	return 0;
//}
//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
//#include <stdio.h>
//int search(int arr[], int b, int c)
//{
//	int left = 0;
//	int right = c - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < b)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > b)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = search(arr, 9, sz);
//	if (-1 == a)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标为%d\n",a);
//	}
//	return 0;
//}
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
#include<stdio.h>
#include <string.h>
int main()
{
	char input[20] = {0};
	int i = 0;
	printf("请输入密码\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%s", input);
		if (strcmp("abcdef", input) == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次均输入错误，退出程序\n");
	}
	return 0;
}
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
#include <stdio.h>
int main(void)
{
	char a = '0';
	int b = 0;
	while (1)
	{
		scanf("%c", &a);
		b = (int)a;
		if (b <= 90 && b >= 65)
		{
			b += 32;
			printf("%c\n", b);
		}
		else if (b <= 122 && b >= 97)
		{
			b -= 32;
			; printf("%c\n", b);
		}
		else
		{
			;
		}
	}
	return 0;
}
#include <stdio.h>
int find(int arr[], int b, int c)
{
	int left = 0;
	int right = c - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > b)
		{
			right = mid - 1;
		}
		 else if (arr[mid] < b)
		{
			left = mid + 1;
		}
		 else
		 {
			 return mid;
		 }
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int a = find(arr, 9, sz);
	if (-1 == a)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是%d",a);
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("1:玩游戏\n");
	printf("2:退出\n");
}
void game()
{
	int sj = rand()%100+1;
	int num = 0; 
	while (1)
	{
		printf("请输入要猜的数字\n");
		scanf("%d", &num);
		if (num > sj)
		{
			printf("猜大了\n");
		}
		 else if (num < sj)
		{
			printf("猜小了\n");
		}
		 else
		{
			 printf("恭喜你，猜对了!!!!!!!!!\n");
			 break;
		}
	}
}
int main()
{
	menu();
	int input = 0;
	srand((unsigned int)(time(NULL)));
	printf("请选择\n");
	do{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} 
	while (1);
	return 0;
}
