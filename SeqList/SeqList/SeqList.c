#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
//��ʼ��˳���
void SeqListInit(SeqList* psl)
{
	assert(psl != NULL);
	psl->capacity = INIT_MAX;
	psl->base = (DataType*)malloc(sizeof(DataType)*psl->capacity);
	psl->sz = 0;
}
//���˳����Ƿ�����
static bool CheckSeqListIsFull(SeqList* psl)
{
	return psl->sz >= psl->capacity;
}

//���˳����Ƿ��ѿ�
static bool CheckSeqListIsEmpty(SeqList* psl)
{
	return psl->sz == 0;
}
//�����Ƿ��������
int find_val(SeqList* psl, DataType val)
{
	if (CheckSeqListIsEmpty(psl))
	{
		printf("˳����ѿգ��޷�ɾ��\n");
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
//β��
bool SeqListPushBack(SeqList* psl,DataType x)
{
	assert(psl != NULL);
	if (CheckSeqListIsFull(psl))
	{
		printf("˳���������%d�޷��洢��\n",x);
		return false;
	}
		psl->base[psl->sz++] = x;
		return true;
}
//ͷ��
bool SeqListPushFront(SeqList* psl, DataType x)
{
	int i = 0;
	assert(psl != NULL);
	if (CheckSeqListIsFull(psl))
	{
		printf("˳���������%d�޷��洢��\n", x);
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
//βɾ
bool SeqListPopBack(SeqList* psl)
{
	assert(psl != NULL);
	if (CheckSeqListIsEmpty(psl))
	{
		printf("˳����ѿ�,�޷�ɾ��\n");
		return false;
	}
	psl->sz--;
	printf("ɾ���ɹ�\n");
	return true;
} 
//ͷɾ
bool SeqListPopFront(SeqList* psl)
{
	assert(psl != NULL);
	int i = 0;
	if (CheckSeqListIsEmpty(psl))
	{
		printf("˳����ѿգ��޷�ɾ��\n");
		return false;
	}
	for (i = 0; i <psl->sz-1; i++)
	{
		psl->base[i]= psl->base[i+1] ;
	}
	psl->sz--;
	printf("ɾ���ɹ�\n");
	return true;
}
//ɾ��ĳ��λ�õ�ֵ
bool SeqListDeletePos(SeqList* psl,DataType pos)
{
	assert(psl!=NULL);
	int i = 0;
	if (CheckSeqListIsEmpty(psl))
	{
		printf("˳����ѿգ��޷�ɾ��\n");
		return false;
	}
	if (pos<=0 || pos>psl->sz)
	{
		printf("λ�ô���\n");
		return false;
	}
	for (i=pos-1;i<psl->sz-1;i++)
	{
		psl->base[i]=psl->base[i+1];
	}
	psl->sz--;
	printf("ɾ���ɹ�\n");
	return true;
}
//ɾ��ֵ
bool SeqListDeleteVal(SeqList* psl, DataType val)
{
	assert(psl!=NULL);
	int i = 0;
	for (i = find_val(psl, val); i < psl->sz-1; i++)
	{
		psl->base[i] = psl->base[i + 1];
	}
	psl->sz--;
	printf("ɾ���ɹ�\n");
	return true;
}



//��ĳ��λ�õ�ֵ
bool SeqListFindPos(SeqList* psl, DataType pos)
{
	assert(psl!=NULL);
	if (CheckSeqListIsEmpty(psl))
	{
		printf("˳����ѿգ��޷�����\n");
		return false;
	}
	if (pos <= 0 || pos>psl->sz)
	{
		printf("λ�ô���\n");
		return false;
	}
	printf("��λ�õ���Ϊ:%d\n",psl->base[pos-1]);
	return true;
}



//��ֵ��λ��
bool SeqListFindVal(SeqList* psl, DataType val)
{
	assert(psl != NULL);
	if (find_val(psl, val) != -1)
	{
		printf("��������λ��Ϊ:%d\n", find_val(psl, val) + 1);
	}
	return true;
}


//�޸ĸ�λ�õ�ֵ
bool SeqListModifyPos(SeqList* psl, DataType pos, DataType val)
{
	assert(psl != NULL);
	if (CheckSeqListIsEmpty(psl))
	{
		printf("˳����ѿգ��޷��޸�\n");
		return false;
	}
	if (pos <= 0 || pos>psl->sz)
	{
		printf("λ�ô���\n");
		return false;
	}
	psl->base[pos - 1] = val;
	printf("�޸ĳɹ�\n");
	return true;
}


//�޸�һ��ֵ
bool SeqListModifyVal(SeqList* psl, DataType val, DataType pos)
{
	assert(psl!=NULL);
	DataType tmp = 0;
	int ret = find_val(psl, val);
	if (CheckSeqListIsEmpty(psl))
	{
		printf("˳����ѿգ��޷��޸�\n");
		return false;
	}
	if (ret == -1)
	{
		printf("���޴���\n");
		return false;
	}
	if (pos <= 0 || pos>psl->sz)
	{
		printf("λ�ô���\n");
		return false;
	}
	tmp = psl->base[ret];
	psl->base[ret] = psl->base[pos - 1];
	psl->base[pos - 1] = tmp;
	printf("�޸ĳɹ�\n");
	return true;
}


//���Ӹ���λ�õĸ�����
bool SeqListInsertPos(SeqList* psl, DataType pos, DataType val)
{
	assert(psl != NULL);
	int i = 0;
	if (CheckSeqListIsFull(psl))
	{
		printf("˳���������%d�޷����ӡ�\n", val);
		return false;
	}
	if (pos <= 0 || pos>psl->sz)
	{
		printf("λ�ô���\n");
		return false;
	}
	for (i = psl->sz; i > pos-1; i--)
	{
		psl->base[i] = psl->base[i-1];
	}

    psl->base[pos - 1] = val;
	psl->sz++;
	printf("���ӳɹ�\n");
	return true;
}





//��ת˳���
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
	printf("��ת�ɹ�\n");
}



//չʾ˳���
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


//��˳���Ĵ�С
int  SeqListLenth(SeqList* psl)
{
	return psl->sz;
}

//���˳���
void SeqListClear(SeqList* psl)
{
	assert(psl!=NULL);
	psl->sz = 0;
	printf("����ɹ�\n");
}

//�ݻ�˳���
void SeqListDestroy(SeqList* psl)
{
	assert(psl!=NULL);
	free(psl->base);
	psl->base = NULL;
	psl->capacity = 0;
	psl->sz = 0;

}


