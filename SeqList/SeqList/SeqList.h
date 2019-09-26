#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


#define DataType int 
#define INIT_MAX 8
typedef struct SeqList
{
	DataType* base;
	size_t capacity;
	size_t sz;
}SeqList;

void SeqListInit(SeqList* psl);