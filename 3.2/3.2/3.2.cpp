#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <queue>
#include <assert.h>
using namespace std;
template<class T>
struct less
{
	bool operator()(const T&left, const T&right)
	{
		return left < right;
	}
};
template<class T>
struct greator
{
	bool operator()(const T&left, const T&right)
	{
		return right>left;
	}
};
template<class T,class Cont = vector<T>,class Com = less<T>>
class Priority_Queue 
{
	public:
		typedef     T    value_type;
		typedef size_t   size_type;
		explicit Priority_Queue() :c()
		{
			make_heap(c.begin(),c.end());
		}
		Priority_Queue(const value_type *first, const value_type *last);
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
			push_heap(c.begin(),c.end());
		}
		void pop()
		{
			c.pop_back(x);
			pop_heap(c.begin(),c.end());
		}
	protected:
		Cont c;
		Com comp;
};

int main()
{
	Priority_Queue<int>Q;
	Q.push(5);
	Q.push(9);
	Q.push(7);
	Q.push(3);
	Q.push(2);
	Q.push(6);
	cout << Q.top() << endl;
	return 0;
}