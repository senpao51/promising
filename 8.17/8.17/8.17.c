#define _CRT_SECURE_NO_WARNINGS 1
//1.�ݹ����n��쳲�������
//#include <stdio.h>
//int Fib(int input)
//{
//	if (input <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(input - 1) + Fib(input - 2);
//	}
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	scanf("%d",&input);
//	ret = Fib(input);
//	printf("%d",ret);
//	return 0;
//}
//�ǵݹ����n��쳲�������
//#include <stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 0; i < n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	scanf("%d", &input);
//	ret = Fib(input);
//	printf("%d",ret);
// 	return 0;
//}
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
//#include <stdio.h>
//int CiFang(int n,int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*CiFang(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	scanf("%d %d",&n,&k);
//	ret = CiFang(n,k);
//	printf("%d",ret);
//	return 0;
//}
//
//#include <stdio.h>
//struct p
//{
//	char name[20];
//	short age;
//	char sex[5];
//};
//int main()
//{
//	struct p = { "����"��20��"��" };
//	struct *ptr = &p;
//	printf("%s %d %s",p.name,p.age,p.sex);
//	return 0;
//}
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#include <stdio.h>
int DigitSum(int num)
{
	if (num > 9)
	{
		int i = 0;
		i = num % 10;
		return i + DigitSum(num / 10);
	}
	else
	{
		return num;
	}
}
int main()
{
	int input = 0;
	int ret = 0;
	scanf("%d",&input);
	ret = DigitSum(input);
	printf("%d",ret);
	return 0;
}
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
#include <stdio.h>
int main()
{
	char arr[] = { 0 };
	char input = 0;
	scanf("%s",&input);
	return 0;
}