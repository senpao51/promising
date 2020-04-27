#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices)
{
	int len = prices.size();
	if (len == 0 || len == 1)
		return 0;
	vector<int>dp(len, 0);
	dp[0] = 0;
	int minprice = prices[0];
	for (int i = 1; i<len; i++)
	{
		if (prices[i]<minprice)
			minprice = prices[i];
		dp[i] = max(dp[i - 1], prices[i] - minprice);
	}
	return dp[len - 1];
}
int main()
{
	vector<int>v = { 7, 1, 5, 3, 6, 4 };
	cout << maxProfit(v) << endl;
	return 0;
}
	//#include <iostream>
	//using namespace std;
	//class circular
	//{
	//public:
	//	double length()
	//	{
	//		return r * 2 * 3.14;
	//	}
	//	double area()
	//	{
	//		return r*r*3.14;
	//	}
	//	void set()
	//	{
	//		cin >> r;
	//	}
	//	void show()
	//	{
	//		cout << "圆的周长为:" << length() << "  圆的面积为:" << area() << endl;
	//	}
	//private:
	//	double r;//半径
	//};
	//int main()
	//{
	//	circular cir;
	//	cir.set();
	//	cir.show();
	//}












//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//void fun(int& a, int& b, int&c)
//{
//	vector<int>v;
//	v.push_back(a);
//	v.push_back(b);
//	v.push_back(c);
//	sort(v.begin(),v.end());
//	a = v[0];
//	b = v[1];
//	c = v[2];
//}
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	fun(a, b, c);
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//void g(int n, int m)
//{
//	int**arr = new int*[n];
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = new int[m];
//	}
//	int k = 1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			arr[i][j] = k;
//			k++;
//		}
//	}
//	int colsum = 0;
//	int rowsum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			rowsum += arr[i][j];
//		}
//		cout << rowsum << " ";
//		rowsum = 0;
//	}
//	cout << endl;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			colsum += arr[j][i];
//		}
//		cout << colsum << " ";
//		colsum = 0;
//	}
//	cout << endl;
//	for (int i = 0; i < n; i++)
//	{
//		delete[] arr[i];
//	}
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	g(n, m);
//	return 0;
//}
//void fun(int n)
//{
//	int*arr = new int[n];
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		arr[i - 1] = i;
//		sum += i;
//	}
//	cout << sum << endl;
//	delete []arr;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	fun(n);
//	return 0;
//}
//template<typename T>
//void fun(T*arr, int n)
//{
//	vector<T>v(arr,arr+n);
//	sort(v.begin(), v.end());
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = v[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	double arr1[] = {3.14,2.13,5.68,9,0};
//	int n1 = sizeof(arr1) / sizeof(arr1[0]);
//	fun(arr1, n1);
//	int arr2[] = { 5, 6, 3, 9, 0, 1, 4, 7, 8 };
//	int n2 = sizeof(arr2) / sizeof(arr2[0]);
//	fun(arr2, n2);
//	string arr3[] = {"world","c++","apple","hello","orange"};
//	int n3 = sizeof(arr3) / sizeof(arr3[0]);
//	fun(arr3, n3);
//	return 0;
//}
//double fun(double a, double b)
//{
//	return a < b ? a : b;
//}
//string fun(string s1, string s2,string s3)
//{
//	return min(s1, min(s2, s3));
//}
//int fun(int*arr)
//{
//	vector<int>v(arr,arr+10);
//	sort(v.begin(), v.end());
//	return v[0];
//}
//int main()
//{
//	cout << fun(0.1,0.4) << endl;
//	cout << fun("hello","world","c++") << endl;
//	int arr[] = {5,3,6,9,1,2,8,7,4,0};
//	cout << fun(arr) << endl;
//	return 0;
//}