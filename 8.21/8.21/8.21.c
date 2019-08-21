#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int num = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int n = value & 1;
//		num += n*(int)pow(2, 31 - i);
//		value >>= 1;
//	}
//	return num;
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	scanf("%d",&input);
//	ret = reverse_bit(input);
//	printf("%u",ret);
//	return 0;
//}
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//#include <stdio.h>
//double Pingjun(int x, int y)
//{
//	int min = (x <= y ? x : y);
//	int max = (x >= y ? x : y);
//	double mid = max - min;
//	return (min + mid/ 2);
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	double ret = Pingjun(a, b);
//	printf("%lf",ret);
//	return 0;
//}
//#include <stdio.h>
//int Find(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = arr[0] ^ arr[1];
//	for (i = 2; i < sz; i++)
//	{
//		tmp = tmp^arr[i];
//	}
//	return tmp;
//}
//int main()
//{
//	int arr[9] = {1,2,3,4,5,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=Find(arr, sz);
//	printf("%d\n",ret);
//	return 0;
//}
#include <stdio.h>
int my_strlen(char arr[])
{
	int count = 0;
	int i = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}

void Print(char arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] != ' ')
		{
			
		}
		else
		{
			arr[i+1]=
		}
	}
}
int main()
{
	char arr[] = "student a am i";
	int sz = my_strlen(arr); 
	Print(arr, sz);
	return 0;
}