#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
//³õÊ¼»¯Ë³Ðò±í
void SeqListInit(SeqList* psl)
{
	psl->capacity = INIT_MAX;
	psl->base = (DataType*)malloc(sizeof(DataType)*psl->capacity);
	psl->sz = 0;
}
