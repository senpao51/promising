#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void Find(int arr[], int sz , int *p1,int *p2)
//{
//	//1.�����е��������һ�𸳸�tmp
//	int i = 0;
//	int tmp = 0;
//	int pos = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp ^= arr[i];
//	}
//	//2.�ҵ�tmp����Ӧ������Ϊ1��һλ��
//	for (i = 0; i < 32; i++)
//	{
//		if (((tmp >> i) & 1) == 1)
//			pos = i;
//	}
//	//3.����λΪ1�������Ϸ���һ�𣬴�λΪ0�������Ϸ���һ��
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
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
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
//3.ģ��ʵ��strcpy
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
//4.ģ��ʵ��strcat 
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
