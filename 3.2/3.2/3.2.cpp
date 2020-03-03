#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <queue>
#include <assert.h>
#include <string>
using namespace std;
//namespace senpao
//{
//	template<class T>
//	struct less
//	{
//		bool operator()(const T&left, const T&right)
//		{
//			return left < right;
//		}
//	};
//
//	template<class T>
//	struct greater
//	{
//		bool operator()(const T&left, const T&right)
//		{
//			return left>right;
//		}
//	};
//	template<class T, class Cont = vector<T>, typename Pred = less<T>>
//	class Priority_Queue
//	{
//	public:
//		typedef     T    value_type;
//		typedef size_t   size_type;
//		explicit Priority_Queue()
//		{
//			make_heap(c.begin(), c.end());
//		}
//		Priority_Queue(const value_type *first, const value_type *last) :c(first, last)
//		{
//			make_heap(c.begin(), c.end());
//		}
//		bool empty() const
//		{
//			return c.empty();
//		}
//		size_type size() const
//		{
//			return c.size();
//		}
//		value_type& top()
//		{
//			assert(!empty());
//			return c.front();
//		}
//		const value_type& top() const
//		{
//			assert(!empty());
//			return c.front();
//		}
//		void push(const value_type& x)
//		{
//			c.push_back(x);
//			push_heap(c.begin(), c.end());
//		}
//		void pop()
//		{
//			c.pop_back();
//			pop_heap(c.begin(), c.end());
//		}
//	protected:
//		Cont c;
//		Pred comp;
//	};
//};
namespace senpao
{
	template<class T>
	struct less
	{
		bool operator()(const T&left, const T&right)
		{
			return left < right;
		}
	};

	template<class T>
	struct greater
	{
		bool operator()(const T&left, const T&right)
		{
			return left> right;
		}
	};
	template<class T, class Cont = vector<T>, typename Pred = less<T>>
	class Priority_Queue
	{
	public:
		typedef     T    value_type;
		typedef size_t   size_type;
		explicit Priority_Queue()
		{

		}
		Priority_Queue(const value_type *first, const value_type *last)
		{
			while (first != last)
			{
				c.push_back(*first++);
				adjustup(c.size()-1);
			}
		}
		bool empty() const
		{
			return c.empty();
		}
		size_type size() const
		{
			return c.size();
		}
		value_type& top()
		{
			assert(!empty());
			return c.front();
		}
		const value_type& top() const
		{
			assert(!empty());
			return c.front();
		}
		void push(const value_type& x)
		{
			c.push_back(x);
			adjustup(c.size()-1);
		}
		void pop()
		{
			std::swap(c.front(),c.back());
			c.pop_back();
			adjustdown(0);
		}
		void adjustdown(int parent)
		{
			int child = parent * 2 + 1;
			while (child < c.size())
			{
				if ((child + 1 < c.size()) && comp(c[child],c[child+1]))
					child++;
				if (comp(c[parent], c[child]))
				{
					std::swap(c[parent], c[child]);
					parent = child;
					child = parent * 2 + 1;
				}
				else
					break;
			}
		}
		void adjustup(int child)
		{
			int parent = (child - 1) / 2;
			while (child)
			{
				if (comp(c[parent], c[child]))
				{
					std::swap(c[parent], c[child]);
					child = parent;
					parent = (child - 1) / 2;
				}
				else
					break;
			}
		}
	protected:
		Cont c;
		Pred comp;
	};
};
//int main()
//{
//	int arr[] = { 5, 9, 3, 400, 6, 7, 100 };
//	senpao::Priority_Queue<int,vector<int>,senpao::greater<int>>Q(arr,arr+7);
//	cout << Q.top() << endl;
//	Q.pop();
//	cout << Q.top() << endl;
//	Q.pop();
//	cout << Q.top() << endl;
//	Q.pop();
//	cout << Q.top() << endl;
//	Q.pop(); 
//	cout << Q.top() << endl;
//	Q.pop();
//	cout << Q.top() << endl;
//	Q.pop();
//	cout << Q.top() << endl;
//	return 0;
//}
int main()
{
	string s;
	getline(cin, s);
	int left = 0;
	int right = s.size() - 1;
	while (left<right)
	{
		std::swap(s[left++], s[right--]);
	}
	size_t  p = 0;
	while (1)
	{
		size_t pos = s.find(' ', p);
		if (string::npos != pos)
		{
			size_t q = pos + 1;
			while (p != pos)
			{
				std::swap(s[p], s[pos - 1]);
				p++;
				pos--;
			}
			p = q;
		}
		else
			break;
	}
	int max = s.size() - 1;
	while (p != max)
	{
		std::swap(s[p++], s[max--]);
	}
	cout << s << endl;
	return 0;
}