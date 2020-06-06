#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vld.h>
using namespace std;

template<class T>
class my_auto_ptr
{
public:
	my_auto_ptr(T* _ptr = 0) :ptr(_ptr)
	{}
	my_auto_ptr(const my_auto_ptr<T>& Y) :ptr(Y.release())
	{}
	my_auto_ptr<T>& operator=(const my_auto_ptr<T>& Y)
	{
		reset(Y.release());
		return (*this);
	}
	~my_auto_ptr()
	{
		delete ptr;
	}
public:
	T* release()const
	{
		T* tmp = ptr;
		((my_auto_ptr<T>*)this)->ptr = 0;
		return tmp;
	}
	void reset(T*_ptr = 0)
	{
		if (ptr != _ptr)
		{
			delete ptr;
			ptr = _ptr;
		}
	}
public:
	T* get()const
	{
		return (ptr);
	}
public:
	T& operator*()const
	{
		return (*ptr);
	}
	T* operator->()const
	{
		return (get());
	}
public:
	
private:
	T* ptr;
};
int main()
{
	int *p = new int(10);
	my_auto_ptr<int>ptr(p);
	my_auto_ptr<int>ptr1(ptr);
}
/*
template<typename T>
class my_auto_ptr
{
public:
	my_auto_ptr(T* _p = 0) :Owns(_p != 0), ptr(_p)
	{}
	my_auto_ptr(const my_auto_ptr<T>& Y) :Owns(Y.Owns), ptr(Y.release())
	{}
	my_auto_ptr<T>& operator=(const my_auto_ptr<T>& Y)
	{
		if (this != &Y)
		{

		}
		return *this;
	}
	~my_auto_ptr()
	{
		if (Owns)
			delete ptr;
	}
public:
	T& operator*()const 
	{
		return *ptr;
	}
	T* operator->()const
	{
		return ptr;
	}
public:
	T* release()const //常引用只能调动常方法
	{
		((my_auto_ptr<T>*)this)->Owns = false;//将this的类型从 my_auto_ptr<T>*const 强转为my_auto_ptr<T>*
		return ptr;
	}
private:
	bool Owns;
	T*   ptr;
};
int main()
{
	int *p = new int(10);
	int *q = new int(20);
	my_auto_ptr<int>ptr(p);
	cout << *ptr << endl;
	my_auto_ptr<int>ptr1(ptr);

	return 0;
}
*/