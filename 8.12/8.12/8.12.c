#define _CRT_SECURE_NO_WARNINGS 1
//1.������A�е����ݺ�����B�е����ݽ��н�����������һ����
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 5,6,7,8 };
//	int arr[5] = { 0 };
//	for (a = 0; a < 4; a++)
//	{
//		for (b = 0; b < 4; b++)
//		{
//			if (a == b)
//			{
//				arr[5] = arr1[a];
//				arr1[a] = arr2[b];
//				arr2[b] = arr[5];
//				break;
//			}
//		}
//		printf("%d ", arr1[a]);
//	}
//	printf("\n");
//	for (b = 0; b < 4; b++)
//	{
//		printf("%d ", arr2[b]);
//	}
//	return 0;
//}
//2.����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	double b = 0;
//	double sum = 0;
//	for (a = 1; a < 101; a++)
//	{
//		b = pow(-1, a + 1);
//		sum = sum + b*(1.0 / a);
//	}
//	printf("sum=%f",sum);
//	return 0;
//}
//3.��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int count = 0;
//	for (a = 1; a < 101; a++)
//	{
//		b = a / 10;
//		c = a % 10;
//		if (9 == b)
//		{
//			count += 1;
//		}
//		if (9 == c)
//		{
//			count += 1;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
	//int a = 3;
	//int b = 0;
	//int c = 0;
	//b = a++;//��aԭ����ֵ��b��a��++
	//printf("%d",b);
	//c = ++a;//��a++���ٽ�ֵ��c
	//printf("%d",c);
	//return 0;
	//int a =(int)5.1;
	//printf("%d ",a);
//}
//����������ʱ��������������������ֵ��
//1.
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 5;
//	a = a+b;
//	b = a-b;
//	a = a-b;
//	printf("%d %d",a,b);
//	return 0;
//}
//2.
//#include<stdio.h>
//int main()
//{ 
//	int a = 10;
//	int b = 5;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d",a,b);
//	return 0;
//}