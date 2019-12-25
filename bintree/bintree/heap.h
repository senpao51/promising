#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

#define DataType int



typedef struct Heap
{
	DataType*heap;
	size_t capacity;
	size_t sz;
}Heap;



void HeapInit(Heap*php,int n);
bool HeapInsert(Heap*php, DataType x);
bool HeapRemove(Heap*php);
DataType HeapTop(Heap*php);
void HeapShow(Heap*php);
void HeapDestroy(Heap*php);


