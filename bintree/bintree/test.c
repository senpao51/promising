#define _CRT_SECURE_NO_WARNINGS 1
#include "bintree.h"
int main()
{
	char *str = "ABC##DE##F##G#H##";
	int i = 0;
	BinTreeNode* p;
	BinTree bt;
	BinTree btmp;
	BinTreeInit(&bt);
	BinTreeInit(&btmp);
	//BinTreeCreate_1(&bt);
	BinTreeCreate_3(&bt,str,&i);
	printf("VRL:");
	PreOrder(&bt);
	printf("\n");
	printf("RVL:");
	InOrder(&bt);
	printf("\n");
	printf("RLV:");
	PostOrder(&bt);
	printf("\n");
	printf("Level:");
	//LevelOrder(&bt);
	printf("\n");
	printf("Size = %d\n",Size(&bt));
	printf("Height = %d\n",Height(&bt));
	p = Find(&bt,'B');
	p = Parent(&bt,'G');
	Clone(&bt,&btmp);

	return 0;
}