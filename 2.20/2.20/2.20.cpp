#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
template<typename T>
class Vector
{
public:
	typedef T* iterator;
public:
	iterator begin()
	{
		return start;
	}
	iterator end()
	{
		return last;
	}
public:
	Vector() :start(nullptr), finish(nullptr), last(nullptr)
	{}
	Vector(size_t num, T&val) :start(nullptr), finish(nullptr), last(nullptr)
	{}
public:
	size_t size()const
	{
		return finish - start;
	}
	size_t capacity()const
	{
		return last - start;
	}
	bool empty()const
	{
		return start == finish;
	}
	void clear()const
	{
		finish = start;
	}
	void reserve(size_t n)
	{
		if (n > capacity())
		{
			T* new_start = new T[n];
			if (start)
			{
				for (int i = 0; i < size(); i++)
				{
					new_start[i] = start[i];
				}
				delete[]start;
			}
			start = new_start;
			finish = new_start + size();
			last = new_start + n;
		}
	}
	void resize(size_t n, const T&val = T())
	{
		if (n <= capacity())
		{
			finish = start + n;
		}
		else
		{
			reserve(n * 2);
			iterator p = finish;
			finish = start + n;
			while (p != finish)
			{
				*p = val;
				p++;
			}
		}
	}
public:
private:
	T*start;
	T*finish;
	T*last;
};
int main()
{
	Vector<int>v1;
	Vector<int>::iterator it = v1.begin();
	while (it != v1.end())
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << v1.capacity() << endl;
	cout << v1.size() << endl;
	v1.reserve(20);
	
	cout << v1.capacity() << endl;
	v1.resize(10.2);
	cout << v1.size() << endl;
	for (auto &e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	/*for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;*/
	for (auto &e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
	return 0;
}
