#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//#define DataType char
//#define MAX 1000
//typedef struct BinTreeNode
//{
//	DataType data;
//	struct BinTreeNode* leftchild;
//	struct BinTreeNode* rightchild;
//}BinTreeNode;
//typedef struct BinTree
//{
//	BinTreeNode* root;
//}BinTree;
//typedef struct Queue
//{
//	struct BinTreeNode**base;
//	int front;
//	int tail;
//	int capacity;
//}Queue;
//void QueueInit(Queue*Q)
//{
//	Q->capacity = MAX;
//	Q->base = (struct BinTreeNode**)malloc(sizeof(BinTreeNode)*Q->capacity);
//	Q->front = Q->tail = 0;
//}
//void QueueInsert(Queue*Q, BinTreeNode*x)
//{
//	Q->base[Q->tail++] = x;
//}
//void QueueDelete(Queue*Q)
//{
//	Q->front++;
//}
//struct BinTreeNode* GetQueueFront(Queue*Q)
//{
//	return Q->base[Q->front];
//}
//bool QueueEmpty(Queue*Q)
//{
//	return Q->front == Q->tail;
//}
//BinTreeNode* _BinTreeCreate_3(char*str, int*i)
//{
//	if (str[*i] == '#' || str[*i] == '\0')
//		return NULL;
//	else
//	{
//		BinTreeNode*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
//		t->data = str[*i];
//		(*i)++;
//		t->leftchild = _BinTreeCreate_3(str, i);
//		(*i)++;
//		t->rightchild = _BinTreeCreate_3(str, i);
//		return t;
//	}
//}
//void BinTreeCreate_3(BinTree*t, char*str, int*i)
//{
//	t->root = _BinTreeCreate_3(str, i);
//}
//void _LevelOrder(BinTreeNode*root,char*array,int*returnSize)
//{
//	Queue Q;
//	QueueInit(&Q);
//	QueueInsert(&Q,root);
//	while (!QueueEmpty(&Q))
//	{
//		BinTreeNode* p = GetQueueFront(&Q);
//		array[(*returnSize)++] = p->data;
//		QueueDelete(&Q);
//		if (p->leftchild != NULL)
//			QueueInsert(&Q,p->leftchild);
//		if (p->rightchild != NULL)
//			QueueInsert(&Q,p->rightchild);
//	}
//}
//char* LevelOrder(BinTree*t,int*returnSize)
//{
//	*returnSize = 0;
//	char*array = (char*)malloc(sizeof(char)*MAX);
//	_LevelOrder(t->root,array,returnSize);
//	return array;
//}
//void main()
//{
//	Queue Q;
//	QueueInit(&Q);
//	char *str = "ABC##DE##F##G#H##";
//	BinTree bt;
//	int i = 0;
//	int returnSize = 0;
//	BinTreeCreate_3(&bt, str, &i);
//	char*arr = LevelOrder(&bt,&returnSize);
//	printf("%s\n",arr);
//}
int fun(int a, int b)
{
	while (b != 0)
	{
		int tmp = a^b;
		int p = (a&b)<<1;
		a = tmp;
		b = p;
	}
	return a;
}
void main()
{
	cout << fun(15, 12) << endl;
}
