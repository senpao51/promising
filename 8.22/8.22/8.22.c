#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void Print(int arr[],int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] & 1 )!= 1)
//		{
//			tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}
//	}
//	printf("%d",arr);
//}
//int main()
//{
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,sz);
//	return 0;
//}


//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//#include <stdio.h>
//void Move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((left<right)&&arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while ((left<right)&&arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		left++;
//		right--;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Move(arr,sz);
//	Print(arr, sz);
//	return 0;
//}
//���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
#include <stdio.h>
//void Find(int arr[3][3], int* prow, int* pcol, int k)
//{
//	int x = 0;
//	int y = *pcol - 1;
//	while (x<=*prow-1&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*prow = x;
//			*pcol = y;
//			return;
//		}
//	}
//		*prow = -1;
//		*pcol = -1;
//		return;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int row = 3;
//	int col = 3;
//	int input = 0;
//	printf("������Ҫ���ҵ�����\n");
//	scanf("%d",&input);
//	Find(arr, &row, &col, input);
//	if (-1 == row&&-1 == col)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±���%d %d",row,col);
//	}
//	return 0;
//}


//void Find(int arr[3][3], int* prow, int* pcol, int input)
//{
//	int x = *prow - 1;
//	int y = 0;
//	while (x>=0&&y<=*pcol -1)
//	{
//		if (arr[x][y] > input)
//		{
//			x--;
//		}
//		else if (arr[x][y] < input)
//		{
//			y++;
//		}
//		else
//		{
//			*prow = x;
//			*pcol = y;
//			return;
//		}
//	}
//	*prow = -1;
//	*pcol = -1;
//	return;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int row = 3;
//	int col = 3;
//	int input = 0;
//	printf("������Ҫ���ҵ�����\n");
//	scanf("%d",&input);
//	Find(arr, &row, &col, input);
//	if (-1 == row&&-1 == col)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±���%d %d",row,col);
//	}
//	return 0;
//}