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
//3.дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//#include <stdio.h>
//int DigitSum(int num)
//{
//	if (num > 9)
//	{
//		return num % 10 + DigitSum(num / 10);
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	scanf("%d",&input);
//	ret = DigitSum(input);
//	printf("%d",ret);
//	return 0;
//}
//4.��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//#include <stdio.h>
//reverse_string(char * string,int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	if (sz>0)
//	{
//		for (i = 0; i < sz-1; i++)
//		{
//			tmp = string[i+1];
//			string[i + 1] = string[i];
//			string[i] = tmp;
//		}
//		sz--;
//		reverse_string(string, sz);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = 0;
//	int a = 0;
//	sz = sizeof(arr) / sizeof(arr[0])-1;
//	reverse_string(arr,sz);
//	for (a = 0; a < 6; a++)
//	{
//		printf("%c ",arr[a]);
//	}
//	return 0;
//}
//
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ǵݹ�
//#include <stdio.h>
//int MyStrlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (1)
//	{
//		if (arr[i]!= '\0')
//		{
//			count++;
//		    i++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = 0;
//	ret = MyStrlen(arr);
//	printf("%d ",ret);
//	return 0;
//}
//�ݹ�
//#include <stdio.h>
//int MyStrlen(char* p)
//{
//	if (*p == '\0')
//		return 0;
//	else
//	{
//		return 1 + MyStrlen(p+1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = 0;
//	ret = MyStrlen(arr);
//	printf("%d ",ret);
//	return 0;
//}
//
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//�ݹ�
//#include <stdio.h>
//int JieCheng(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*JieCheng(n - 1);
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d",&input);
//	int ret = JieCheng(input);
//	printf("%d\n",ret);
//	return 0;
//}
//�ǵݹ�
//
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//#include<stdio.h>
//void Print(int n)
//{
//	if (n <= 9)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		printf("%d ",n%10);
//		Print(n/10);
//	}
//}
//int main()
//{ 
//	int input = 0;
//	scanf("%d",&input);
//	Print(input);
//	return 0;
//}