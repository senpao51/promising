#pragma once 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define DataType int 


typedef struct SClistNode
{
	DataType data;
	struct SClistNode *next;
}SClistNode;

typedef struct Slist
{
	SClistNode* first;
	SClistNode* last;
	size_t sz;
}SClist;


void SClistInit(SClist* plist);
void SClistShow(SClist *plist);
bool SClistPushBack(SClist* plist, DataType x);
bool SClistPushFront(SClist* plist, DataType x);
bool SClistPopBack(SClist* plist);
bool SClistPopFront(SClist* plist);
////int SClistDeletePos(&mylist, pos, ret);
//bool SClistFindPos(SClist* plist, int pos);
//SClistNode* SClistFindVal(SClist* plist, int val);
//bool SClistDeleteVal(SClist* plist, int val);
size_t SClistLength(SClist* plist);
void SClistClear(SClist* plist);
//void SClistSort(SClist* plist);
//void SClistReserve(SClist* plist);
//void SClistDestroy(SClist* plist);

