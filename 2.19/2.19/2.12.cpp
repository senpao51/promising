#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

//int main()
//{ 
//	int arr[] = { 1, 2, 3, 4, 5 };
//	vector<int>v(arr, arr + 5);
//	vector<int>::iterator it = find(v.begin(),v.begin()+2,2);
//	cout << *it << endl;
//	it = find(v.begin(),v.end(),5);
//	cout << *it << endl;
//	return 0;
//}
//int main()
//{
//	vector<int>v;
//	for (int i = 1; i <= 10; i++)
//	{
//		v.push_back(i);
//	}
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	v.pop_back();
//	v.pop_back();
//	v.pop_back();
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	v.insert(v.begin(),10);
//	v.insert(v.end(), 20);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	v.insert(v.begin(),5,100);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	int arr[] = { 1, 2, 3, 4, 5 };
//	v.insert(v.begin(),arr,arr+5);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	vector<int>v1(10,0);
//	v.insert(v.end(),v1.begin(),v1.end());
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	v.erase(v.begin());
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	v.erase(v.begin()+2,v.end()-2);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	v.swap(v1);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
//int main()
//{
//	vector<int>v(10, 2);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
//int main()
//{
//	vector<int>v(10, 2);
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//	cout << v.empty() << endl;
//	v.reserve(20);
//	cout << v.capacity() << endl;
//	v.resize(15,5);
//	cout << v.size() << endl;
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	v.clear();
//	it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	return 0;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7};
//	vector<int>v(arr,arr+7);
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		*it *= 2;
//		it++;
//	}
//	it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it<<" ";
//		it++;
//	}
//	cout << endl;
//	v.clear();
//	vector<int>::reverse_iterator rit = v.rbegin();
//	while (rit != v.rend())
//	{
//		cout << *rit << " ";
//		rit++;
//	}
//	cout << endl;
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	vector<int>v2(arr,arr+5);
//	vector<int>v(v2);
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it<<" ";
//		it++;
//	}
//	cout << endl;
//	vector<char>v1(10,'c');
//	vector<char>::iterator it1 = v1.begin();
//	while (it1 != v1.end())
//	{
//		cout << *it1 << " ";
//		it1++;
//	}
//	cout << endl;
//	return 0;
//}
