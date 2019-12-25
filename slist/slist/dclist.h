#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


#define DataType int 

typedef struct DClistNode
{
	DataType data;
	struct DClistNode* prev;
	struct DClistNode* next;
}DClistNode;

typedef struct DClist
{
	DClistNode* first;
	DClistNode* last;
	size_t sz;
}DClist;

void DClistInit(DClist* plist);
void DClistShow(DClist *plist);
bool DClistPushBack(DClist* plist, DataType x);
bool DClistPushFront(DClist* plist, DataType x);
bool DClistPopBack(DClist* plist);
bool DClistPopFront(DClist* plist);
//int DClistDeletePos(&mylist, pos, ret);
DataType DClistFindPos(DClist* plist, int pos);
DClistNode* DClistFindVal(DClist* plist, int val);
bool DClistDeleteVal(DClist* plist, int val);
bool DClistInsertVal(DClist* plist, int val);
size_t DClistLength(DClist* plist);
void DClistClear(DClist* plist);
void DClistSort(DClist* plist);
void DClistReserve(DClist* plist);
void DClistDestroy(DClist* plist);
