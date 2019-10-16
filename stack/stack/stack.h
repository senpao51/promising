#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>


#define  DataType int
#define  STACK_DEAFAULT  8

typedef struct SeqStack
{
	DataType* base;
	size_t capacity;
	int top;
}SeqStack;


void SeqStackInit(SeqStack* ps,int sz);


































