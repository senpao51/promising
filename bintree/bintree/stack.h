#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "bintree.h"


#define  STACK_DEAFAULT  20
#define  ADD_DEAFAULT  20
#define StackDataType BinTreeNode*

typedef struct SeqStack
{
	StackDataType* base;
	size_t capacity;
	int top;
}SeqStack;


void SeqStackInit(SeqStack* ps, int sz);
void SeqStackPush(SeqStack* ps, StackDataType x);
void SeqStackPop(SeqStack* ps);
StackDataType SeqStackPeepTop(SeqStack* ps);
void SeqStackShow(SeqStack* ps);



//��ʼ��ջ
void SeqStackInit(SeqStack* ps, int sz)
{
	ps->capacity = sz;
	ps->base = (StackDataType*)malloc(sizeof(StackDataType)*STACK_DEAFAULT);
	ps->top = 0;
}
//�ж�ջ�Ƿ���
bool SeqStackIsFull(SeqStack*ps)
{
	return (ps->capacity) < (ps->top + 1) ? true : false;
}

//�ж�ջ�Ƿ��
bool SeqStackIsEmpty(SeqStack*ps)
{
	return (ps->top == 0) ? true : false;
}

//����ջ�Ŀռ�
void SeqStackAddCapacity(SeqStack*ps)
{
	StackDataType* ptr = (StackDataType*)realloc(ps->base, sizeof(StackDataType)*(STACK_DEAFAULT + 5));
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
void SeqStackPush(SeqStack*ps, StackDataType x)
{
	if (SeqStackIsFull(ps))
	{
		SeqStackAddCapacity(ps);
	}
	ps->base[ps->top++] = x;
}

StackDataType SeqStackPeepTop(SeqStack* ps)
{
	return ps->base[ps->top - 1];
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
	for (i = ps->top - 1; i >= 0; i--)
	{
		printf("%d\n", ps->base[i]);
	}
}
