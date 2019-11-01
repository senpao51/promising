#define _CRT_SECURE_NO_WARNINGS 1
#include "bintree.h"
int main()
{
	char *str = "ABC##DE##F##G#H##";
	char *str2 = "ABC##D##BD##C##";
	int i = 0;
	int j  =0 ;
	BinTreeNode* p;
	BinTree bt;
	BinTree btmp;
	BinTreeInit(&bt);
	BinTreeInit(&btmp);
	//BinTreeCreate_1(&bt);
	BinTreeCreate_3(&bt,str,&i);
	BinTreeCreate_3(&btmp, str2, &j);
	printf("VRL  :");
	PreOrder(&bt);
	printf("\n");
	printf("VRLNr:");
	PreOrderNr(&bt);
	printf("\n");

	printf("RVL  :");
	InOrder(&bt);
	printf("\n");
	printf("RVLNr:");
	InOrderNr(&bt);
	printf("\n");

	printf("RLV  :");
	PostOrder(&bt);
	printf("\n");
	printf("RLVNr:");
	PostOrderNr(&bt);
	printf("\n");

	printf("Level:");
	LevelOrder(&bt);
	printf("\n");
	printf("Size = %d\n",Size(&bt));
	printf("Height = %d\n",Height(&bt));
	p = Find(&bt,'B');
	p = Parent(&bt,'G');
	Clone(&bt, &btmp);
	printf("%d\n",Equal(&bt,&btmp));
	printf("%d\n",isSymmetric(&btmp));
	return 0;
}