#pragma once


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>




#define DataType char
#define _DEAFAULT_QUEUE_SIZE 30
typedef struct BinTreeNode
{
	DataType data;
	struct BinTreeNode* leftchild;
	struct BinTreeNode* rightchild;
}BinTreeNode;

typedef struct BinTree
{
	BinTreeNode* root;
}BinTree;

//typedef BinTreeNode*  BinTree;




void BinTreeInit(BinTree* t);
void BinTreeCreate_1(BinTree* t);
void BinTreeCreate_2(BinTree* t);
void BinTreeCreate_3(BinTree* t,char*str, int*i);
void PreOrder(BinTree* t);
void PreOrderNr(BinTree* t);
void InOrder(BinTree* t);
void InOrderNr(BinTree* t);
void PostOrder(BinTree* t);
void PostOrderNr(BinTree* t);
void LevelOrder(BinTree* t);
size_t Size(BinTree* t);
size_t Height(BinTree* t);
BinTreeNode*Find(BinTree* t,DataType key);
BinTreeNode*Parent(BinTree* t, DataType key);
void Clone(BinTree* t1, BinTree* t2);
bool Equal(BinTree*t1, BinTree*t2);
bool isSymmetric(BinTree*t);



