#pragma once


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include "heap.h"

typedef struct BstNode
{
	DataType data;
	struct BstNode* left;
	struct BstNode* right;
}BstNode;


typedef BstNode* Bst;


void BstInit(Bst*t);
bool BstInsert(Bst*t, DataType x);
bool BstRemove(Bst*t, DataType x);
void BstSort(Bst t,int*arr,int*j);
DataType Max(Bst t);
DataType Min(Bst t);



