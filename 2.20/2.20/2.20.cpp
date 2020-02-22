#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <vld.h>
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
		return finish;
	}
public:
	Vector() :start(nullptr), finish(nullptr), last(nullptr)
	{}
	Vector(Vector<T>&t) :start(nullptr), finish(nullptr), last(nullptr)
	{
		Vector<T>tmp;
		tmp.reserve(t.size());
		for (int i = 0; i < t.size(); i++)
		{
			tmp.push_back(t[i]);
		}
		tmp.swap(*this);
	}
	Vector<T>& operator= (const Vector<T>&t)
	{
		if (*this != t)
		{
			Vector<T>tmp(t);
			tmp.swap(*this);
		}
		return *this;
	}
	Vector(size_t num, const T&val = T()) :start(nullptr), finish(nullptr), last(nullptr)
	{
		//reserve(num);
		for (int i = 0; i < num; i++)
		{
			push_back(val);
		}
	}
	Vector(T*p1, T*p2) :start(nullptr), finish(nullptr), last(nullptr)
	{
		while (p1 != p2)
		{
			push_back(*p1);
			p1++;
		}
	}

	~Vector()
	{
		delete[]start;
		start = finish = last = nullptr;
	}
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
		int oldsize = size();
		if (n > capacity())
		{
			T* new_start = new T[n];
			if (start)
			{
				for (int i = 0; i < oldsize; i++)
				{
					new_start[i] = start[i];
				}
				delete[] start;
			}
			start = new_start;
			finish = start + oldsize;
			last = start + n;
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
			reserve(n + 5);
			iterator p = finish;
			finish = start + n;
			while (p != finish)
			{
				*p = val;
				p++;
			}
		}
	}
	void insert(iterator pos, const T&val)
	{
		if (size() >= capacity())
		{
			size_t oldpos = pos - start;
			reserve(size() + 5);
			//重新定位迭代器
			pos = start + oldpos;
		}
		iterator p = finish;
		while (p != pos)
		{
			*p = *(p - 1);
			p--;
		}
		*p = val;
		finish++;
	}
	void insert(iterator pos, size_t n, const T&val)
	{
		int oldsize = pos - start;
		insert(pos, val);
		n--;
		while (n--)
		{
			insert(start + oldsize, val);
		}
	}
	void insert(iterator pos, T*p1, T*p2)
	{
		int oldsize = pos - start;
		insert(pos, *(--p2));
		while (p1 != p2)
		{
			insert(start + oldsize, *(--p2));
		}
	}
	void erase(iterator pos)
	{
		iterator p = pos;
		while (p != end())
		{
			*p = *(p + 1);
			p++;
		}
		finish--;
	}
	void erase(iterator pos1, iterator pos2)
	{
		while (pos2 != finish)
		{
			*pos1 = *pos2;
			pos1++;
			pos2++;
		}
		finish = pos1;
	}
public:
	void push_back(const T&val)
	{
		insert(end(), val);
	}
	void pop_back()
	{
		erase(end());
	}
	void swap(Vector<T>&t)
	{
	std::swap(start,t.start);
	std::swap(finish, t.finish);
	std::swap(last, t.last);
	}
	T& operator[](int num)
	{
		return *(start + num);
	}
	
private:
	T*start;
	T*finish;
	T*last;
};
int main()
{
	int arr[] = {1,2,3,4,5};
	Vector<int>v1(5, 2);
	Vector<int>v2(10,4);
	v1.swap(v2);
	Vector<int>v3(v2);
	
	/*for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;*/
	for (auto&e : v3)
	{
		cout << e << " ";
	}
	cout << endl;
	Vector<int>v4 = v3;
	for (auto&e : v4)
	{
		cout << e << " ";
	}
	cout << endl;
}
