#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
namespace bit
{
	template<typename T>
	class vector
	{
	public:
		typedef T* iterator;
	public:
		vector() :start(nullptr), finish(nullptr), end_of_storage(nullptr)
		{}
		vector(size_t n, const T &value = T())
			:start(nullptr), finish(nullptr), end_of_storage(nullptr)
		{
			reserve(n);
			while (n-- != 0)
				push_back(value);
		}
		template<class InputIterator>
		vector(InputIterator first, InputIterator last)
			:start(nullptr), finish(nullptr), end_of_storage(nullptr)
		{
			reserve(last - first);
			while (first != last)
			{
				push_back(*first);
				first++;
			}
		}
		~vector()
		{
			delete[]start;
			start = finish = end_of_storage = nullptr;
		}
	public:
		size_t size()const
		{
			return finish - start;
		}
		size_t capacity()const
		{
			return end_of_storage - start;
		}
		bool empty()const
		{
			return finish == start;
		}
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
		void push_back(const T &x)
		{
			insert(end(), x);
		}
	public:
		void swap(vector & v)
		{
			std::swap(start, v.start);
			std::swap(finish, v.finish);
			std::swap(end_of_storage, v.end_of_storage);
		}
		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t oldsize = size();
				T *new_start = new T[n];
				if (start)
				{
					for (int i = 0; i<oldsize; ++i)
					{
						new_start[i] = start[i];
					}
				}

				//释放原有空间
				if (start)
					delete[]start;

				start = new_start;
				finish = start + oldsize;
				end_of_storage = start + n;
			}
		}
		void resize(size_t n, const T& value = T())
		{
			if (n <= size())
			{
				finish = start + n;
				return;
			}

			if (n > capacity())
				reserve(n * 2);

			iterator p = finish;
			finish = start + n;
			while (p != finish)
			{
				*p = value;
				p++;
			}
		}
	public:
		iterator insert(iterator pos, const T &x)
		{
			if (finish >= end_of_storage)
			{
				size_t oldpos = pos - start;
				size_t new_cpy = capacity() ? capacity() * 2 : 1;
				reserve(new_cpy);

				//重新定位迭代器
				pos = start + oldpos;
			}

			iterator p = finish;
			while (p != pos)
			{
				*p = *(p - 1);
				--p;
			}
			*p = x;
			finish++;
			return pos;
		}
		iterator erase(iterator pos)
		{
			iterator p = pos;
			while (p != finish - 1)
			{
				*p = *(p + 1);
				p++;
			}
			finish--;
			return pos;
		}

	private:
		iterator start;
		iterator finish;
		iterator end_of_storage;
	};
};
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
	Vector(size_t num, const T&val = T()) :start(nullptr), finish(nullptr), last(nullptr)
	{
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
				//memcpy(new_start,start,oldsize);
				for (int i = 0; i <oldsize; i++)
				{
					new_start[i] = start[i];
				}
				delete[] start;
			}
			start = new_start;
			finish = start +oldsize;
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
			reserve(n+5);
			iterator p = finish;
			finish = start + n;
			while (p != finish)
			{
				*p = val;
				p++;
			}
		}
	}
	void insert(iterator pos,const T&val)
	{
		if (size() >= capacity())
		{
			size_t oldpos = pos - start;
			reserve(size()+5);
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
		while (n--)
		{
			insert(pos, val);
		}
	}
	void insert(iterator pos, T*p1, T*p2)
	{
		while (p1 != p2)
		{
			insert(pos,*p2);
			p2--;
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
private:
	T*start;
	T*finish;
	T*last;
};
int main()
{
	Vector<int>v1;
	for (auto &e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
	v1.reserve(10);
	cout << v1.capacity() << endl;
	for (auto &e : v1)
	{
		cout << e << " ";
	}
	v1.resize(20);
	for (auto &e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
	v1.insert(v1.begin()+2,8);
	for (auto &e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
	v1.insert(v1.end(), 6);
	for (auto &e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
	v1.erase(v1.begin() + 2);
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);
	v1.pop_back();

	for (auto &e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
	cout << v1.capacity() << endl;
	Vector <int>v2(10,5);
	for (auto &e : v2)
	{
		cout << e << " ";
	}
	cout << endl;
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	Vector<int>v5(arr,arr+6);
	v5.insert(v5.begin(),arr,arr+6);
	//v5.insert(v5.begin()+2,5,4567);
	//v5.erase(v5.begin()+2, v5.end()-2);
	for (auto &e : v5)
	{
		cout << e << " ";
	}
	cout << endl;
	cout << v5.size() << endl;
	return 0;
}