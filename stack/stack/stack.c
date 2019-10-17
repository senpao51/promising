#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

//��ʼ��ջ
void SeqStackInit(SeqStack* ps, int sz)
{
	ps->capacity = sz > STACK_DEAFAULT ? sz : STACK_DEAFAULT;
	ps->base = (DataType*)malloc(sizeof(DataType)*STACK_DEAFAULT);
	ps->top = 0;
}
//�ж�ջ�Ƿ���
bool SeqStackIsFull(SeqStack*ps)
{
	return (ps->capacity)<(ps->top + 1) ? true : false;
}

//�ж�ջ�Ƿ��
bool SeqStackIsEmpty(SeqStack*ps)
{
	return (ps->top ==0) ? true : false;
}

//����ջ�Ŀռ�
void SeqStackAddCapacity(SeqStack*ps)
{
	SeqStack* ptr = (SeqStack*)realloc(ps->base,sizeof(DataType)*(STACK_DEAFAULT+5));
	if (ptr == NULL)
	{
		printf("����ʧ��\n");
		return;
	}
	ps->base = ptr;
	ps->capacity = STACK_DEAFAULT + 5;
	printf("���ݳɹ�\n");
}

//ѹջ
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
	printf("ջ��Ԫ��Ϊ%d\n",ps->base[ps->top-1]);
}

//��ջ
void SeqStackPop(SeqStack* ps)
{
	if (SeqStackIsEmpty(ps))
	{
		printf("ջ�ѿգ��޷�ɾ��\n");
		return;
	}
	ps->top--;
}

//��ʾջ
void SeqStackShow(SeqStack* ps)
{
	int i = 0;
	for (i = ps->top-1; i >= 0; i--)
	{
		printf("%d\n",ps->base[i]);
	}
}
