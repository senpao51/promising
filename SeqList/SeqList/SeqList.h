#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


#define DataType int 
#define INIT_MAX 8
typedef struct SeqList
{
	DataType* base;
	size_t capacity;
	size_t sz;
}SeqList;

void SeqListInit(SeqList* psl);
bool SeqListPushBack(SeqList* psl, DataType x);
bool SeqListPushFront(SeqList* psl, DataType x);
bool SeqListPopBack(SeqList* psl);
bool SeqListPopFront(SeqList* psl);
bool SeqListDeletePos(SeqList* psl, DataType pos);
bool SeqListDeleteVal(SeqList* psl, DataType val);
bool SeqListFindPos(SeqList* psl, DataType pos);
bool SeqListFindVal(SeqList* psl, DataType val);
bool SeqListModifyPos(SeqList* psl, DataType pos, DataType val);
bool SeqListModifyVal(SeqList* psl, DataType val, DataType pos);
bool SeqListInsertPos(SeqList* psl, DataType pos, DataType val);




void SeqListShow(SeqList* psl);
int  SeqListLenth(SeqList* psl);
void SeqListClear(SeqList* psl);

void SeqListReverse(SeqList* psl);


void SeqListDestroy(SeqList* psl);


