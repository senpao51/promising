#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void Find(int arr[], int sz , int *p1,int *p2)
//{
//	//1.将所有的数异或在一起赋给tmp
//	int i = 0;
//	int tmp = 0;
//	int pos = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp ^= arr[i];
//	}
//	//2.找到tmp所对应二进制为1的一位数
//	for (i = 0; i < 32; i++)
//	{
//		if (((tmp >> i) & 1) == 1)
//			pos = i;
//	}
//	//3.将此位为1的数集合放在一起，此位为0的数集合放在一起。
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//			*p1 ^= arr[i];
//	}
//	*p2 = tmp ^ *p1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num1 = 0;
//	int num2 = 0;
//	Find(arr, sz, &num1,&num2);
//	printf("%d %d\n",num1,num2);
//	return 0;
//}
//
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//#include <stdio.h>
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	scanf("%d",&money);
//	total += money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;;
//	}
//	printf("%d\n", total);
//}
//3.模拟实现strcpy
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* dest, const char* sou)
//{
//	char* ret = dest;
//	assert(dest&&sou);
//	while (*sou != '\0')
//	{
//		*dest = *sou;
//		dest++;
//		sou++;
//	}
//	*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[10] = { 0 };
//	char* ret = my_strcpy(arr2, arr1);
//	printf("%s\n",ret);
//	return 0;
//}
//4.模拟实现strcat 
//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char* dest, char*sou)
//{
//	char* ret = dest;
//	assert(dest&&sou);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*sou!='\0')
//	{
//		*dest = *sou;
//		dest++;
//		sou++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "senpao";
//	char arr2[20] = "love";
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s\n",ret);
//	return 0;
//}
