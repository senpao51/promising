#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>
using namespace std;
//int main()
//{
//	int i = 0, a = 0;
//	while (i < 20)
//	{
//		for (;;)
//		{
//			if ((i % 10) == 0)
//				break;
//			else
//				i--;
//		}
//		i += 11; a += i;
//	}
//	cout << a << endl;
//	return 0;
//}
typedef struct s
{
	char ch;
	int mark;
}s;
typedef struct Stack
{
	struct s*tmp;
	int capacity;
	int top;
}Stack;
void StackInit(Stack*st)
{
	st->capacity = 10000;
	st->tmp = (s*)malloc(sizeof(s)*st->capacity);
	st->tmp->ch = '\0';
	st->tmp->mark = 0;
	st->top = 0;
}
void StackInsert(Stack*st,char s)
{
	st->tmp->ch = s;
	st->top++;
}
bool canConstruct(char * ransomNote, char * magazine)
{
	if (ransomNote == magazine)
		return true;
	Stack st;
	StackInit(&st);
	while (*magazine != '\0')
	{
		StackInsert(&st, *magazine);
		magazine++;
	}
	while (*ransomNote != '\0')
	{
		for (int i = 0; <st.top; i++)
		{

		}
	}
}
//"fffbfg"
//"effjfggbffjdgbjjhhdegh"
int main()
{
	cout << canConstruct("fffbfg", "effjfggbffjdgbjjhhdegh") << endl;
	return 0;
}