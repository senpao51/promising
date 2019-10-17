#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

//³õÊ¼»¯Õ»
void SeqStackInit(SeqStack* ps, int sz)
{
	ps->capacity = sz > STACK_DEAFAULT ? sz : STACK_DEAFAULT;
	ps->base = (DataType*)malloc(sizeof(DataType)*STACK_DEAFAULT);
	ps->top = 0;
}
//ÅĞ¶ÏÕ»ÊÇ·ñÂú
bool SeqStackIsFull(SeqStack*ps)
{
	return (ps->capacity)<(ps->top + 1) ? true : false;
}

//ÅĞ¶ÏÕ»ÊÇ·ñ¿Õ
bool SeqStackIsEmpty(SeqStack*ps)
{
	return (ps->top ==0) ? true : false;
}

//Ôö¼ÓÕ»µÄ¿Õ¼ä
void SeqStackAddCapacity(SeqStack*ps)
{
	SeqStack* ptr = (SeqStack*)realloc(ps->base,sizeof(DataType)*(STACK_DEAFAULT+5));
	if (ptr == NULL)
	{
		printf("ÔöÈİÊ§°Ü\n");
		return;
	}
	ps->base = ptr;
	ps->capacity = STACK_DEAFAULT + 5;
	printf("ÔöÈİ³É¹¦\n");
}

//Ñ¹Õ»
void SeqStackPush(SeqStack*ps, DataType x)
{
	if (SeqStackIsFull(ps))
	{
		SeqStackAddCapacity(ps);
	}
	ps->base[ps->top++] = x;
}

void SeqStackPeepTop(SeqStack* ps)
{
	printf("Õ»¶¥ÔªËØÎª%d\n",ps->base[ps->top-1]);
}

//³öÕ»
void SeqStackPop(SeqStack* ps)
{
	if (SeqStackIsEmpty(ps))
	{
		printf("Õ»ÒÑ¿Õ£¬ÎŞ·¨É¾³ı\n");
		return;
	}
	ps->top--;
}

//ÏÔÊ¾Õ»
void SeqStackShow(SeqStack* ps)
{
	int i = 0;
	for (i = ps->top-1; i >= 0; i--)
	{
		printf("%d\n",ps->base[i]);
	}
}
