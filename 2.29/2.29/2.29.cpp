#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <string>
using namespace std;
int StrToInt(string str)
{
	int sum = 0;
	int i = 0;
	if (str.size() == 0)
		return 0;
	auto p = str.rbegin();
	while (p != str.rend())
	{
		if (*p <= 9 && *p >= 0)
			sum += pow(*p, i);
		else if (p == str.rend() - 1 && *p == '-')
			sum *= -1;
		else
			return 0;
		p++;
	}
	return sum;
}
int main()
{
	string s = "+345678";
	auto p = s.rend()-1;
	cout << *p << endl;
	cout<<StrToInt(s) << endl;
	return 0;
}
//int main()
//{
//	priority_queue<string>	Q;
//	Q.push("abc");
//	Q.push("abcd00");
//	Q.push("h");
//	Q.push("fdgfdgklhi");
//	cout << Q.top() << endl;
//	return 0;
//}
//template<typename T,class Cont = deque<T>>
//class Queue
//{
//public:
//	explicit Queue()
//	{}
//	size_t size()const
//	{
//		return c.size();
//	}
//	bool empty()const
//	{
//		return c.empty();
//	}
//	T& front()
//	{
//		return c.front();
//	}
//	const T& front()const
//	{
//		return c.front();
//	}
//	T& back()
//	{
//		return c.back();
//	}
//	const T& back()const
//	{
//		return c.back();
//	}
//	void push(const T&value)
//	{
//		c.push_back(value);
//	}
//	void pop()
//	{
//		c.pop_front();
//	}
//protected:
//	Cont c;
//};
//int main()
//{
//	Queue<int>Q;
//	Q.push(1);
//	Q.push(2);
//	Q.push(3);
//	Q.push(4);
//	Q.push(5);
//	Q.push(6);
//	cout << Q.size() << endl;
//	cout << Q.empty() << endl;
//	cout << Q.back() << endl;
//	cout << Q.front() << endl;
//	Q.pop();
//	cout << Q.back() << endl;
//	cout << Q.front() << endl;
//}

//template<typename T,class Cont = deque<T>>
//class Stack
//{
//public:
//	explicit Stack()
//	{}
//	bool empty()const
//	{
//		return c.empty();
//	}
//	size_t size()const
//	{
//		return c.size();
//	}
//	T& top()
//	{
//		return c.back();
//	}
//	const T& top()const
//	{
//		return c.back();
//	}
//	void push(const T&value)
//	{
//		c.push_back(value);
//	}
//	void pop()
//	{
//		c.pop_back();
//	}
//protected:
//	Cont c;
//};
//int main()
//{
//	Stack<int> st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	st.push(4);
//	st.push(5);
//	cout << st.top() << endl;
//
//	return 0;
//}
//template<class T,
//class Cont = deque<T> >
//class stack {
//public:
//	typedef Cont::allocator_type allocator_type;
//	typedef Cont::value_type value_type;
//	typedef Cont::size_type size_type;
//	explicit stack(const allocator_type& al = allocator_type()) const;
//	bool empty() const;
//	size_type size() const;
//	allocator_type get_allocator() const;
//	value_type& top();
//	const value_type& top() const;
//	void push(const value_type& x);
//	void pop();
//protected:
//	Cont c;
//};
//int main()
//{
//	stack<int>st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	st.push(4);
//	st.push(5);
//	cout << st.top() << endl;
//	st.pop();
//	cout << st.top() << endl;
//	stack<int>st1;
//	st1 = st;
//	cout << st1.top() << endl;
//}


//int main()
//{
//	int array[] = { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9 };
//
//	int n = sizeof(array) / sizeof(int);
//
//	list<int> mylist(array, array + n);
//
//	auto it = mylist.begin();
//
//	while (it != mylist.end())
//
//	{
//
//		if (*it != 0)
//
//			cout << *it << " ";
//		else
//			it = mylist.erase(it);
//		++it;
//		
//	}
//	return 0;
//}

	//﻿int main()
	//
	//{
	//
	//	int array[] = { 1, 2, 3, 4, 0, 5, 6, 7, 8, 9 };
	//
	//	int n = sizeof(array) / sizeof(int);
	//
	//	list<int> mylist(array, array + n);
	//
	//	auto it = mylist.begin();
	//
	//	while (it != mylist.end())
	//
	//	{
	//
	//		if (*it != 0)
	//
	//			cout << *it << " ";
	//
	//		else
	//
	//			it = mylist.erase(it);
	//
	//		++it;
	//
	//	}
	//
	//	return 0;
	//
	//}
	//int main()
	//
	//{
	//
	//	int ar[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//
	//	int n = sizeof(ar) / sizeof(int);
	//
	//	list<int> mylist(ar, ar + n);
	//
	//	list<int>::iterator pos = find(mylist.begin(), mylist.end(), 5);
	//
	//	reverse(mylist.begin(), pos);
	//
	//	reverse(pos, mylist.end());
	//
	//	list<int>::const_reverse_iterator crit = mylist.crbegin();
	//
	//	while (crit != mylist.crend())
	//
	//	{
	//
	//		cout << *crit << " ";
	//
	//		++crit;
	//
	//	}
	//
	//	cout << endl;
	//
	//}
	//int main()
	//{
	//	list<int>t = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//	auto pos = find(t.begin(),t.end(),5);
	//	cout << *pos << endl;
	//}
	//int main()
	//{
	//	queue<int>Q;
	//	cout << Q.empty() << endl;
	//	return 0;
	//}


	//int main()
	//{
	//	int arr[] = {5,9,3,6,8,7,4,1,2,0};
	//	int len = sizeof(arr) / sizeof(arr[0]);
	//	for (int i = 0; i < len-1; i++)
	//	{
	//		for (int j = 0; j <len - 1-i; j++)
	//		{
	//			if (arr[j] <= arr[j + 1])
	//			{
	//				int ret = arr[j];
	//				arr[j] = arr[j + 1];
	//				arr[j + 1] = ret;
	//			}
	//		}
	//	}
	//	for (auto e : arr)
	//	{
	//		cout << e << " ";
	//	}
	//	cout << endl;
	//}
	//int findKthLargest(vector<int>& nums, int k)
	//{
	//	int len = nums.size();
	//	int arr[100];
	//	for (int i = 0; i<len; i++)
	//	{
	//		arr[i] = nums[i];
	//	}
	//	for (int i = 0; i<len - 1; i++)
	//	{
	//		for (int j = i; j<len; j++)
	//		{
	//			if (arr[j]<arr[j + 1])
	//			{
	//				int ret = arr[j];
	//				arr[j] = arr[j + 1];
	//				arr[j + 1] = ret;
	//			}
	//		}
	//	}
	//	return arr[--k];
	//}
	//int main()
	//{
	//	vector<int>nums = {3,2,3,1,2,4,5,5,6};
	//	cout << findKthLargest(nums,4) << endl;
	//	return 0;
	//}
