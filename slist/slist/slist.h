#pragma once 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define DataType int 


typedef struct SlistNode
{
	DataType data;
	struct SlistNode *next;
}SlistNode;

typedef struct Slist
{
	SlistNode* first;
	SlistNode* last;
	size_t sz;
}Slist;


void SlistInit(Slist* plist);
void SlistShow(Slist *plist);
bool SlistPushBack(Slist* plist,DataType x);
bool SlistPushFront(Slist* plist, DataType x);
bool SlistPopBack(Slist* plist);
bool SlistPopFront(Slist* plist);
//int SlistDeletePos(&mylist, pos, ret);
bool SlistFindPos(Slist* plist, int pos);
SlistNode* SlistFindVal(Slist* plist, int val);
bool SlistDeleteVal(Slist* plist, int val);












