#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	int a = 5;
//	if (a = 0)
//	{
//		printf("%d",a-10);
//	}
//	else
//	{
//		printf("%d",a++);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d\n",sizeof(double **[3][4]));
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	x = z = 2, y = 3;
//	if (x > y)
//		z = 1;
//	else if (x == y)
//		z = 0;
//	else
//		z = -1;
//	return 0;
//}

//int main()
//{
//	char achello[] = "hello\0world";
//	char acnew[15] = { 0 };
//	strcpy(acnew, achello);
//	printf("%d\n",strlen(acnew));
//	printf("%d\n",sizeof(achello));
//	return 0;
//}

//非递归求第n个斐波那契数
//int Find(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//		return 1;
//	else
//	{
//		while (n - 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	scanf("%d",&input);
//	ret = Find(input);
//	printf("%d\n",ret);
//	return 0;
//}

//递归求第n个斐波那契数
//int Find(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return Find(n - 1) + Find(n - 2);
//	}
//}
//int main()
//{
//	int ret = 0;
//	int input = 0;
//	scanf("%d",&input);
//	ret = Find(input);
//	printf("%d\n",ret);
//	return 0;
//}


//int main()
//{
//	char a[20];
//	char *p1 = (char*)a;
//	char *p2 = (char*)(a + 5);
//	int n = p2 - p1;
//	printf("%d\n",n);
//}

//
//#define F(X,Y) ((X)+(Y))
//int main()
//{
//	int a = 3, b = 4;
//	printf("%d\n",F(a++,b++));
//	return 0;
//}


//int main()
//{
//	int i = 1, sum = 0;
//	while (i < 10)
//	{
//		sum = sum + 1;
//		i++;
//	}
//	printf("%d %d\n",i,sum);
//	return 0;
//}

//struct a
//{
//	short a;
//	long c;
//	char b;
//	long d;
//};
//int main()
//{
//	struct a A;
//	printf("%d\n",sizeof(A));
//	return 0;
//}

//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//void main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j, m);
//	printf("%d\n",k);
//	k = fun(j, m);
//	printf("%d\n",k);
//	return 0;
//}


//求一个unsigned int型变量在内存中二进制1的个数
//int check(unsigned int num)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if ((num & 1) == 1)
//		{
//			count++;
//		}
//		num >>= 1;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int input = 0;
//	int count = 0;
//	scanf("%d",&input);
//	count = check(input);
//	printf("%d\n",count);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	x = 5 > 1 - 2 && 2 || 2 * 4 < 4 - !0;
//	printf("%d\n",x);
//	return 0;
//}



int main()
{
	FILE* pf=fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n",strerror(errno));
	}
	else
	{
		fclose(pf);
		pf = NULL;
	}
	return 0;
}