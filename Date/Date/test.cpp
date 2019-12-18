#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"
void main()
{
	Date dt1(2019,12,16);
	cout << dt1.GetWeek() << endl;
	Date dt2 = dt1 + 10000;
	cout << dt2 << endl;
	Date dt3(2000,12,18);
	Date dt4(1999, 12, 4);
	Date dt5 =dt2--;
	Date dt6;
	cout << dt1 - dt3 << endl;
	/*if (dt3 > dt4)
		cout << "==" << endl;
	else*/
		cout << "!=" << endl;
	//cin >>dt6 ;
	//cout << dt6 << endl;
	//cout << (dt1 - dt3) << endl;
	//cout << dt2 << endl;
}
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX 100000
//#define DataType char
//#define _DEAFAULT_QUEUE_SIZE 30
//typedef struct BinTreeNode
//{
//	DataType data;
//	struct BinTreeNode* left;
//	struct BinTreeNode* right;
//}BinTreeNode;
//
//typedef struct BinTree
//{
//	BinTreeNode* root;
//}BinTree;
//typedef struct Stack
//{
//	struct BinTreeNode*base;
//	int capacity;
//	int top;
//}Stack;
//BinTreeNode*_BinTreeCreateBy_VLR_LVR(char*vlr, char*lvr, int n)
//{
//	if (n == 0)
//		return 0;
//	int k = 0;
//	while (vlr[0] != lvr[k])
//		k++;
//	BinTreeNode*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
//	t->data = vlr[0];
//	t->left = _BinTreeCreateBy_VLR_LVR(vlr + 1, lvr, k);
//	t->right = _BinTreeCreateBy_VLR_LVR(vlr + k + 1, lvr + k + 1, n - k - 1);
//	return t;
//}
//void BinTreeCreateBy_VLR_LVR(BinTree* t, char*vlr, char*lvr, int n)
//{
//	t->root = _BinTreeCreateBy_VLR_LVR(vlr, lvr, n);
//}
//void StackInit(Stack*st)
//{
//	st->capacity = MAX;
//	st->top = 0;
//	st->base = (struct BinTreeNode*)malloc(sizeof(struct BinTreeNode)*st->capacity);
//}
//void StackInsert(Stack*st, struct BinTreeNode*x)
//{
//	st->base[st->top++] = *x;
//}
//void StackDelete(Stack*st)
//{
//	st->top--;
//}
//struct BinTreeNode*GetStackTop(Stack*st)
//{
//	return &(st->base[st->top - 1]);
//}
//bool StackEmpty(Stack*st)
//{
//	return st->top == 0;
//}
//void PreOrder(struct BinTreeNode*root, int*returnSize, int*array)
//{
//	if (root == NULL)
//		return;
//	Stack st;
//	struct BinTreeNode*p;
//	StackInit(&st);
//	StackInsert(&st, root);
//	while (!StackEmpty(&st))
//	{
//		p = GetStackTop(&st);
//		GetStackTop(&st);
//		array[*returnSize] = p->data;
//		(*returnSize)++;
//		if (p->right != NULL)
//		{
//			StackInsert(&st, p->right);
//		}
//		if (p->left != NULL)
//		{
//			StackInsert(&st, p->left);
//		}
//	}
//}
//int* preorderTraversal(struct BinTreeNode* root, int* returnSize)
//{
//	*returnSize = 0;
//	int * array = (int*)malloc(sizeof(int)*MAX);
//	PreOrder(root, returnSize, array);
//	return array;
//}
//
//void main()
//{
//	char* vlr = "ABCDEFGH";
//	char *lvr = "CBEDFAGH";
//	int n = strlen(lvr);
//	BinTree bt;
//	BinTreeNode t;
//	BinTreeCreateBy_VLR_LVR(&bt, vlr, lvr, n);
//	int ret = 0;
//	preorderTraversal(&t, &ret);
//}