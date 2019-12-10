#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DataType char
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
BinTreeNode* _BinTreeCreate_3(char*str, int*i)
{
	if (str[*i] == '#' || str[*i] == '\0')
		return NULL;
	else
	{
		BinTreeNode*t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		t->data = str[*i];
		(*i)++;
		t->leftchild = _BinTreeCreate_3(str, i);
		(*i)++;
		t->rightchild = _BinTreeCreate_3(str, i);
		return t;
	}
}
void BinTreeCreate_3(BinTree*t, char*str, int*i)
{
	t->root = _BinTreeCreate_3(str, i);
}



//typedef struct Queue
//{
//
//}Queue;

void main()
{
	char *str = "ABC##DE##F##G#H##";
	BinTree bt;
	int i = 0;
	BinTreeCreate_3(&bt, str, &i);
}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	char ch;
//	scanf("%d %c %d",&a,&ch,&b);
//	if (ch != '\\'&&b != 0)
//	{
//		switch (ch)
//		{
//		case '+':
//		{
//				printf("%d+%d=%d",a,b,a+b);
//				break;
//		}
//		case '-':
//		{
//				printf("%d-%d=%d", a, b, a - b);
//				break;
//		}
//		case '*':
//		{
//				printf("%d*%d=%d", a, b, a * b);
//				break;
//		}
//		case '/':
//		{
//				printf("%d/%d=%d", a, b, a / b);
//				break;
//		}
//		default:
//			break;
//		}
//	}
//}

