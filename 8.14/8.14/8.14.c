#define _CRT_SECURE_NO_WARNINGS 1
//����Ϸ��������
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("0.����Ϸ  \n");
//	printf("1.�˳�����\n");
//}
//void game()
//{
//	int rad = 0;
//	rad = rand()%1000+1;
//	int num = 0;
//	while (1)
//	{
//		printf("������Ҫ�µ�����\n");
//		scanf("%d", &num);
//		if (num > rad)
//		{
//			printf("�´���\n");
//		}
//		else if (num < rad)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
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
//		printf("��ѡ��\n");
//		menu();
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 0:
//			game();
//			break;
//		case 1:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("��������\n");
//			break;
//		}
//	}
//	return 0;
//}
//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ%d\n",a);
//	}
//	return 0;
//}
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
#include<stdio.h>
#include <string.h>
int main()
{
	char input[20] = {0};
	int i = 0;
	printf("����������\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%s", input);
		if (strcmp("abcdef", input) == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("���ξ���������˳�����\n");
	}
	return 0;
}
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
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
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d",a);
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("1:����Ϸ\n");
	printf("2:�˳�\n");
}
void game()
{
	int sj = rand()%100+1;
	int num = 0; 
	while (1)
	{
		printf("������Ҫ�µ�����\n");
		scanf("%d", &num);
		if (num > sj)
		{
			printf("�´���\n");
		}
		 else if (num < sj)
		{
			printf("��С��\n");
		}
		 else
		{
			 printf("��ϲ�㣬�¶���!!!!!!!!!\n");
			 break;
		}
	}
}
int main()
{
	menu();
	int input = 0;
	srand((unsigned int)(time(NULL)));
	printf("��ѡ��\n");
	do{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} 
	while (1);
	return 0;
}
