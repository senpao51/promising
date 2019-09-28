#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
//初始化顺序表
void SeqListInit(SeqList* psl)
{
	assert(psl != NULL);
	psl->capacity = INIT_MAX;
	psl->base = (DataType*)malloc(sizeof(DataType)*psl->capacity);
	psl->sz = 0;
}
//检查顺序表是否已满
static bool CheckSeqListIsFull(SeqList* psl)
{
	return psl->sz >= psl->capacity;
}

//检查顺序表是否已空
static bool CheckSeqListIsEmpty(SeqList* psl)
{
	return psl->sz == 0;
}
//查找是否有这个数
int find_val(SeqList* psl, DataType val)
{
	if (CheckSeqListIsEmpty(psl))
	{
		printf("顺序表已空，无法删除\n");
	}
	assert(psl != NULL);
	int i = 0;
	for (i = 0; i < psl->sz; i++)
	{
		if (psl->base[i] == val)
			return i;
	}
	return -1;
}
//尾插
bool SeqListPushBack(SeqList* psl,DataType x)
{
	assert(psl != NULL);
	if (CheckSeqListIsFull(psl))
	{
		printf("顺序表已满，%d无法存储。\n",x);
		return false;
	}
		psl->base[psl->sz++] = x;
		return true;
}
//头插
bool SeqListPushFront(SeqList* psl, DataType x)
{
	int i = 0;
	assert(psl != NULL);
	if (CheckSeqListIsFull(psl))
	{
		printf("顺序表已满，%d无法存储。\n", x);
		return false;
	}
	for (i = psl->sz; i > 0; i--)
	{
		psl->base[i] = psl->base[i - 1];
	}
	psl->base[0] = x;
	psl->sz++;
	return true;
}
//尾删
bool SeqListPopBack(SeqList* psl)
{
	assert(psl != NULL);
	if (CheckSeqListIsEmpty(psl))
	{
		printf("顺序表已空,无法删除\n");
		return false;
	}
	psl->sz--;
	printf("删除成功\n");
	return true;
} 
//头删
bool SeqListPopFront(SeqList* psl)
{
	assert(psl != NULL);
	int i = 0;
	if (CheckSeqListIsEmpty(psl))
	{
		printf("顺序表已空，无法删除\n");
		return false;
	}
	for (i = 0; i <psl->sz-1; i++)
	{
		psl->base[i]= psl->base[i+1] ;
	}
	psl->sz--;
	printf("删除成功\n");
	return true;
}
//删除某个位置的值
bool SeqListDeletePos(SeqList* psl,DataType pos)
{
	assert(psl!=NULL);
	int i = 0;
	if (CheckSeqListIsEmpty(psl))
	{
		printf("顺序表已空，无法删除\n");
		return false;
	}
	if (pos<=0 || pos>psl->sz)
	{
		printf("位置错误\n");
		return false;
	}
	for (i=pos-1;i<psl->sz-1;i++)
	{
		psl->base[i]=psl->base[i+1];
	}
	psl->sz--;
	printf("删除成功\n");
	return true;
}
//删除值
bool SeqListDeleteVal(SeqList* psl, DataType val)
{
	assert(psl!=NULL);
	int i = 0;
	for (i = find_val(psl, val); i < psl->sz-1; i++)
	{
		psl->base[i] = psl->base[i + 1];
	}
	psl->sz--;
	printf("删除成功\n");
	return true;
}



//找某个位置的值
bool SeqListFindPos(SeqList* psl, DataType pos)
{
	assert(psl!=NULL);
	if (CheckSeqListIsEmpty(psl))
	{
		printf("顺序表已空，无法查找\n");
		return false;
	}
	if (pos <= 0 || pos>psl->sz)
	{
		printf("位置错误\n");
		return false;
	}
	printf("该位置的数为:%d\n",psl->base[pos-1]);
	return true;
}



//找值的位置
bool SeqListFindVal(SeqList* psl, DataType val)
{
	assert(psl != NULL);
	if (find_val(psl, val) != -1)
	{
		printf("该数的首位置为:%d\n", find_val(psl, val) + 1);
	}
	return true;
}


//修改该位置的值
bool SeqListModifyPos(SeqList* psl, DataType pos, DataType val)
{
	assert(psl != NULL);
	if (CheckSeqListIsEmpty(psl))
	{
		printf("顺序表已空，无法修改\n");
		return false;
	}
	if (pos <= 0 || pos>psl->sz)
	{
		printf("位置错误\n");
		return false;
	}
	psl->base[pos - 1] = val;
	printf("修改成功\n");
	return true;
}


//修改一个值
bool SeqListModifyVal(SeqList* psl, DataType val, DataType pos)
{
	assert(psl!=NULL);
	DataType tmp = 0;
	int ret = find_val(psl, val);
	if (CheckSeqListIsEmpty(psl))
	{
		printf("顺序表已空，无法修改\n");
		return false;
	}
	if (ret == -1)
	{
		printf("查无此数\n");
		return false;
	}
	if (pos <= 0 || pos>psl->sz)
	{
		printf("位置错误\n");
		return false;
	}
	tmp = psl->base[ret];
	psl->base[ret] = psl->base[pos - 1];
	psl->base[pos - 1] = tmp;
	printf("修改成功\n");
	return true;
}


//增加给定位置的给定数
bool SeqListInsertPos(SeqList* psl, DataType pos, DataType val)
{
	assert(psl != NULL);
	int i = 0;
	if (CheckSeqListIsFull(psl))
	{
		printf("顺序表已满，%d无法增加。\n", val);
		return false;
	}
	if (pos <= 0 || pos>psl->sz)
	{
		printf("位置错误\n");
		return false;
	}
	for (i = psl->sz; i > pos-1; i--)
	{
		psl->base[i] = psl->base[i-1];
	}

    psl->base[pos - 1] = val;
	psl->sz++;
	printf("增加成功\n");
	return true;
}





//翻转顺序表
void SeqListReverse(SeqList* psl)
{
	assert(psl != NULL);
	DataType left = 0;
	DataType right = psl->sz -1;
	DataType tmp = 0;
	while (left < right)
	{
		tmp = psl->base[left];
		psl->base[left] = psl->base[right];
		psl->base[right] = tmp;
		left++;
		right--;
	}
	printf("翻转成功\n");
}



//展示顺序表
void SeqListShow(SeqList* psl)
{
	assert(psl != NULL);
	int i = 0;
	for (i = 0; i < psl->sz; i++)
	{
		printf("%d ", psl->base[i]);
	}
	printf("\n");
}


//求顺序表的大小
int  SeqListLenth(SeqList* psl)
{
	return psl->sz;
}

//清除顺序表
void SeqListClear(SeqList* psl)
{
	assert(psl!=NULL);
	psl->sz = 0;
	printf("清除成功\n");
}

//摧毁顺序表
void SeqListDestroy(SeqList* psl)
{
	assert(psl!=NULL);
	free(psl->base);
	psl->base = NULL;
	psl->capacity = 0;
	psl->sz = 0;

}


