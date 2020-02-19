#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <assert.h>
#include <vld.h>
using namespace std;
namespace bit
{
	class string
	{
		friend ostream& operator<<(ostream&out, const bit::string&s);
		friend istream& operator>>(istream&in, bit::string&s);
	public:
		typedef char* iterator;
		typedef char* reverse_iterator;
		static size_t npos;
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
			memset(m_str, '\0', m_size);
			m_size = 0;
		}
		void reserve(int new_m_capacity)
		{
			if (new_m_capacity > m_capacity)
			{
				char* new_str = new char[new_m_capacity + 1];
				memset(new_str, '\0', new_m_capacity + 1);
				memcpy(new_str, m_str, m_size);
				m_capacity = new_m_capacity;
				delete[]m_str;
				m_str = new_str;
			}
		}
		void resize(int new_m_size, char ch = '\0')
		{
			if (new_m_size > m_size)
			{
				if (new_m_size > m_capacity)
				{
					reserve(new_m_size * 2);
				}
				memset(m_str + m_size, ch, new_m_size - m_size);
			}
			m_size = new_m_size;
			m_str[m_size] = '\0';
		}
	public:
		void push_back(char ch)
		{
			if (m_size >= m_capacity)
				reserve(m_capacity * 2);
			m_str[m_size++] = ch;
			m_str[m_size] = '\0';
		}
		void append(char*str)
		{
			if (m_size + strlen(str) > m_capacity)
				reserve((m_size + strlen(str)) * 2);
			strcat(m_str, str);
			m_size += strlen(str);
		}
		string& operator+=(char*str)
		{
			append(str);
			return *this;
		}
		string& operator+=(char ch)
		{
			push_back(ch);
			return *this;
		}
		const char*c_str()
		{
			return m_str;
		}
	public:
		size_t Find(char ch, size_t pos = 0)const
		{
			for (int i = pos; i<size(); i++)
			{
				if (m_str[i] == ch)
					return i;
			}
			return -1;
		}
		size_t Find(char*str, size_t pos = 0)const
		{
			char*s = m_str;
			if (pos > 0)
			{
				for (int i = 0; i < pos; i++)
				{
					s++;
				}
			}
			char*p = strstr(s, str);
			if (p == nullptr)
				return -1;
			else
			{
				int count = 0;
				while (s != p)
				{
					s++;
					count++;
				}
				return count + pos;
			}
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
				_swap(*this, tmp);
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
			std::swap(s1.m_str, s2.m_str);
			std::swap(s1.m_capacity, s2.m_capacity);
			std::swap(s1.m_size, s2.m_size);
		}
	private:
		char*m_str;
		size_t m_size;
		size_t m_capacity;
	};
	ostream& operator<<(ostream&out, const bit::string&s)
	{
		out << s.m_str;
		return out;
	}
	istream& operator>>(istream&in,bit::string&s)
	{
	int capacity = 10;
	char*str = new char[capacity];
	char*buf = str;
	while ((*buf = getchar()) == ' ' || (*buf == '\n'))
	;
	int count = 1;
	for (;;)
	{
		if (*buf== ' '||*buf == '\n')
		{
			*buf = '\0';
			break;
		}
		else if (count >=capacity)
		{
			capacity *= 2;
			char*new_str = new char[capacity];
			memcpy(str,new_str,count);
			delete[]str;
			str = new_str;
			buf = str + count-1;
		}
			*++buf = getchar();
			count++;
	}
	s.m_capacity = capacity;
	s.m_size = count-1;
	//delete[]s.m_str;//释放原有m_str的空间。如果是空串，在构造函数里有一个字节的空间
	s.m_str = str;
	return in;
	}
	size_t string::npos = -1;
};

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
	cout << "s4.capacity = "<<s4.capacity() << endl;
	cout << "s4 = " << s4 << endl;
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
	s6 += "senpao";
	cout << s6 << endl;
	cout << s6.size() << endl;
	cout << s6.capacity() << endl;
	s6 += 'c';
	cout << s6 << endl;
	cout << s6.size() << endl;
	cout << s6.capacity() << endl;
	const char* str = s6.c_str();
	cout << str << endl;
	cout << bit::string::npos << endl;
	bit::string s7 = "hello world!";
	size_t pos1 = s7.Find('o',5);
	if (pos1 != bit::string::npos)
	{
		cout << pos1 << endl;
	}
	else
	{
		cout << "error" << endl;
	}
	bit::string s8;
	cin >> s8;
	cout << s8 << endl;
	return 0;
}


//int main()
//{
//	string s('a',10);
//	cout << s << endl;
//	return 0;
//}
