#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
//��ʼ��˳���
void SeqListInit(SeqList* psl)
{
	psl->capacity = INIT_MAX;
	psl->base = (DataType*)malloc(sizeof(DataType)*psl->capacity);
	psl->sz = 0;
}
