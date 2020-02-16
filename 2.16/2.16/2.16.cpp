#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <assert.h>
using namespace std;
namespace bit
{
	class string
	{
		friend ostream& operator<<(ostream&out,const string&s);
	public:
		typedef char* iterator;
	public:
		iterator begin()
		{
			return m_str;
		}
		iterator end()
		{
			return m_str + size();
		}
	public:
		size_t size()const
		{
			return m_size;
		}
		size_t length()const
		{
			return m_size;
		}
		size_t capacity()const
		{
			return m_capacity;
		}
		bool empty()const
		{
			return m_size == 0;
		}
		void clear()
		{
			memset(m_str,'\0',m_size);
			m_size = 0;
		}
		void reserve(int new_m_capacity)
		{
			if (new_m_capacity > m_capacity)
			{
				char* new_str = new char[new_m_capacity + 1];
				memcpy(new_str,m_str,m_size);
				m_capacity = new_m_capacity;
				delete []m_str;
				m_str = new_str;
			}
		}
		void resize(int new_m_size,char ch = '\0')
		{
			if (new_m_size <= m_size)
			{
				for (int i = m_size-1; i >=new_m_size; i--)
				{
					m_str[i] = '\0';
				}
			}
			else
			{
				if (new_m_size > m_capacity)
				{
					char*new_str = new char[new_m_size*2];
					memcpy(new_str,m_str,m_size);
					delete[] m_str;
					m_str = new_str;
					m_capacity = new_m_size*2;
				} 
				for (int i = m_size; i <new_m_size; i++)
				{
					m_str[i] = ch;
				}
				m_str[new_m_size] = '\0';
			}
			m_size = new_m_size;
		}
	public:
		void push_back(char ch)
		{
			if (m_size >= m_capacity)
				reserve(m_capacity*2);
			m_str[m_size++] = ch;
			m_str[m_size] = '\0';
		}
		void append(char*str)
		{
			if (m_size+strlen(str) >= m_capacity)
				reserve((m_size+strlen(str))* 2);

			strcat(m_str,str);
			m_size += strlen(str);
		}
	public:
		string(char*s = "") :m_str(nullptr)
		{
			this->m_capacity = this->m_size = strlen(s);
			m_str = new char[strlen(s) + 1];
			strcpy(m_str, s);
		}
		string(const string&s) :m_str(nullptr), m_capacity(0), m_size(0)
		{
			string tmp(s.m_str);
			_swap(*this, tmp);
		}

		string& operator=(const string&s)
		{
			if (this != &s)
			{
				string tmp(s);
				_swap(*this,tmp);
			}
			return *this;
		}
		char& operator[](int i)
		{
			assert(i >= 0 && i <m_size);
			return m_str[i];
		}
		~string()
		{
			if (m_str)
			{
				delete[]m_str;
				m_str = nullptr;
			}
		}
	protected:
		static void _swap(string&s1, string&s2)
		{
			std::swap(s1.m_str,s2.m_str);
			std::swap(s1.m_capacity,s2.m_capacity);
			std::swap(s1.m_size, s2.m_size);
		}
	private:
		char*m_str;
		size_t m_size;
		size_t m_capacity;
	};
	ostream& operator<<(ostream&out, const string&s)
	{
		out << s.m_str;
		return out;
	}
}

int main()
{
	string s9 = "hellobit";
	s9.resize(8);
	cout << s9 << endl;
	cout << s9.size() << endl;
	bit::string s1("hello world!");
	cout << s1 << endl;
	bit::string s2(s1);
	cout << s2 << endl;
	bit::string s3("senpaolove");
	cout << s3 << endl;
	s3 = s2;
	cout << s3 << endl;
	bit::string s4 = "Hello!";
	bit::string::iterator it =s3.begin();
	while (it != s3.end())
	{
		cout << *it;
		it++;
	}
	cout << endl;
	for (int i = 0; i < s4.size(); i++)
	{
		cout << s4[i];
	}
	cout << endl;
	s4.clear();
	cout << s4 << endl;
	cout << s4.size() << endl;
	cout << s4.capacity() << endl;
	s4.reserve(20);
	cout << s4.capacity() << endl;
	bit::string s5 = "hello hello";
	s5.resize(10, 'a');
	cout << s5 << endl;
	cout << s5.capacity() << endl;
	s5.push_back('c');
	cout << s5 << endl;
	cout << s5.capacity() << endl;
	s5.push_back('b');
	cout << s5 << endl;
	cout << s5.capacity() << endl;
	bit::string s6 = "hello";
	cout << s6 << endl;
	cout << s6.size() << endl;
	cout << s6.capacity() << endl;
	s6.append("world!");
	cout << s6 << endl;
	cout << s6.size() << endl;
	cout << s6.capacity() << endl;
	return 0;
}
//int main()
//{
//	string s('a',10);
//	cout << s << endl;
//	return 0;
//}
