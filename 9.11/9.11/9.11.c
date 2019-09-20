#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int change(int *py)
//{
//	int y = 0;
//	y = y - *py;
//	py = &y;
//	return 0;
//}
//int main()
//{
//	int xx = 3;
//	int *py = &xx;
//	change(py);
//	printf("%d\n",*py);
//	return 0;
//}



//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr,"you");
//	strcpy(arr[1],"me");
//	arr[0][3] = '&';
//	printf("%s\n",arr);
//	return 0;
//}



//
//int main()
//
//{
//	int a = -27;
//	return 0;
//}



//int main()
//{
//	int a = 4, b = 3, *p, *q, *w;
//	p = &a;
//	q = &b;
//	w = q;
//	q = NULL;
//	printf("%d\n",*q);
//	return 0;
//}


//int fun(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x&(x - 1);
//	}
//	return count;
//}
//int main()
//{
//	printf("fun(2017)=%d\n",fun(2019));
//	return 0;
//}

//#define cir(x) x*x
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int t;
//	t = cir(a + b);
//	printf("%d\n",t);
//	return 0;
//}

//
//void fun(unsigned long a)
//{
//	a = 0x01;
//	return;
//}
//int main()
//{
//	unsigned long a = 6;
//	fun(a);
//	printf("%lu",a);
//	return 0;
//}