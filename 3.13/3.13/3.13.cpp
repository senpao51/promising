#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
bool ifisin(int *arr, int rows, int cols, int num)
{
	bool flag = false;
	if (arr != NULL&&rows > 0 && cols > 0)
	{
		int row = rows - 1;
		int col = 0;
		while (arr[row*cols+col] > num&&row >= 0)
			row--;
		while (arr[row*cols + col]< num&&col < cols)
			col++;
		if (arr[row*cols + col] == num)
		{
			flag = true;
		}
	}
	return flag;
}
int main()
{
	int arr[]= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,13,14,15,16 };
	cout << ifisin(arr, 4, 4, 17) << endl;
}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	int sum = 0;
//	cin >> n;
//	while (n != 0)
//	{
//		while (n & 1)
//		{
//			sum++;
//			n = n >> 1;
//		}
//		if (sum>count)
//		{
//			count = sum;
//		}
//		sum = 0;
//		n = n >> 1;
//	}
//	cout << count << endl;
//	return 0;
//}
//int fun(int n)
//{
//	if (n < 2)
//		return n;
//	return 2 * fun(n - 1) + fun(n - 2);
//}
//int main()
//{
//	cout << fun(5) << endl;;
//	return 0;
//}
