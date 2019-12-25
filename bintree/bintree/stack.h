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



//³õÊ¼»¯Õ»
void SeqStackInit(SeqStack* ps, int sz)
{
	ps->capacity = sz;
	ps->base = (StackDataType*)malloc(sizeof(StackDataType)*STACK_DEAFAULT);
	ps->top = 0;
}
//ÅÐ¶ÏÕ»ÊÇ·ñÂú
bool SeqStackIsFull(SeqStack*ps)
{
	return (ps->capacity) < (ps->top + 1) ? true : false;
}

//ÅÐ¶ÏÕ»ÊÇ·ñ¿Õ
bool SeqStackIsEmpty(SeqStack*ps)
{
	return (ps->top == 0) ? true : false;
}

//Ôö¼ÓÕ»µÄ¿Õ¼ä
void SeqStackAddCapacity(SeqStack*ps)
{
	StackDataType* ptr = (StackDataType*)realloc(ps->base, sizeof(StackDataType)*(STACK_DEAFAULT + 5));
	if (ptr == NULL)
	{
		printf("ÔöÈÝÊ§°Ü\n");
		return;
	}
	ps->base = ptr;
	ps->capacity = STACK_DEAFAULT + 5;
	printf("ÔöÈÝ³É¹¦\n");
}

//Ñ¹Õ»
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

//³öÕ»
void SeqStackPop(SeqStack* ps)
{
	if (SeqStackIsEmpty(ps))
	{
		printf("Õ»ÒÑ¿Õ£¬ÎÞ·¨É¾³ý\n");
		return;
	}
	ps->top--;
}

//ÏÔÊ¾Õ»
void SeqStackShow(SeqStack* ps)
{
	int i = 0;
	for (i = ps->top - 1; i >= 0; i--)
	{
		printf("%d\n", ps->base[i]);
	}
}
