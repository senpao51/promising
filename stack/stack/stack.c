#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

//��ʼ��ջ
void SeqStackInit(SeqStack* ps, int sz)
{
	ps->capacity = sz > STACK_DEAFAULT ? sz : STACK_DEAFAULT;
	ps->base = (DataType*)malloc(sizeof(DataType)*STACK_DEAFAULT);
	ps->top = 0;
}
