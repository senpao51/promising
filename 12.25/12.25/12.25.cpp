#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
template <typename Type>
class Array
{
public:
	Array(int size);
	~Array();
	Type& operator[](int pos);
	Array operator+(int offset);
	Type& operator*();
private:
	Type*base;
	int capacity;
	int sz;
};
template<typename Type>
Array<Type>::Array(int size) :capacity(size), base(nullptr)
{
	base = new Type[size];
	memset(base, '\0', sizeof(Type)*sz);
	sz = 0;
}
template<typename Type>
Array<Type>::~Array()
{
	delete[]base;
	base = nullptr;
	capacity = sz = 0;
}
template<typename Type>
Type& Array<Type>::operator[] (int pos)
{
	return base[pos];
}
template <typename Type>
Array Array<Type>:: operator+ (int offset)
{
	Array <int>a = *this;
}
template <typename Type>
Type& Array<Type>::operator*(int pos)
{
	return base[pos];
}
int main()
{
	Array<int>arr(10);
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	//for (int i = 0; i < 10; i++)
	//{
	//	*(arr + i) = i + 10;
	//}
	for (int i = 0; i < 10;i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
