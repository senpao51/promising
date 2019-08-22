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
#include <stdio.h>
int Find(int arr[3][3],int input)
{
	int i = 0;
	for (i = 0; i < 3;i++)

}
int main()
{
	int input = 0;
	scanf("%d",&input);
	int arr[3][3] = {1,2,3,2,3,4,3,4,5};
	int ret = Find(arr,input);
	if (ret == 0)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了\n");
	}
	return 0;
}