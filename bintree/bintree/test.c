#define _CRT_SECURE_NO_WARNINGS 1
#include "bintree.h"
#include "heap.h"
int main()
{
	int arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	Heap hp;
	HeapInit(&hp,n);
	for (i = 0; i < n; i++)
	{
		HeapInsert(&hp, arr[i]);
	}

	HeapShow(&hp);
	HeapRemove(&hp);
	HeapShow(&hp);
	HeapRemove(&hp);
	HeapDestroy(&hp);
	return 0;;
}
//int main()
//{
//	//char *str = "ABC##DE##F##G#H##";
//	//char *str2 = "ABC##D##BD##C##";
//	char *lvr = "CBEDFAGH";
//	char *lrv = "CEFDBHGA";
//	int n = strlen(lvr);
//	int i = 0;
//	int j  =0;
//	BinTreeNode*p;
//	BinTree bt;
//	BinTree btmp;
//	BinTreeInit(&bt);
//	BinTreeInit(&btmp);
//	//BinTreeCreate_1(&bt);
//	//BinTreeCreate_3(&bt,str,&i);
//	//BinTreeCreate_3(&btmp,str2, &j);
//	BinTreeCreateBy_LVR_LRV(&bt,lvr,lrv,n);
//	printf("VLR  :");
//	PreOrder(&bt);
//	printf("\n");
//	printf("VLRNr:");
//	PreOrderNr(&bt);
//	printf("\n");
//	printf("\n");
//
//	printf("LVR  :");
//	InOrder(&bt);
//	printf("\n");
//	printf("LVRNr:");
//	InOrderNr(&bt);
//	printf("\n");
//	printf("\n");
//
//	printf("LRV  :");
//	PostOrder(&bt);
//	printf("\n");
//	printf("LRVNr:");
//	PostOrderNr(&bt);
//	printf("\n");
//	printf("\n");
//
//	printf("Level:");
//	LevelOrder(&bt);
//	printf("\n");
//	printf("Size = %d\n",Size(&bt));
//	printf("Height = %d\n",Height(&bt));
//	p = Find(&bt,'B');
//	p = Parent(&bt,'G');
//	//Clone(&bt, &btmp);
//	printf("%d\n",Equal(&bt,&btmp));
//	printf("%d\n",isSymmetric(&btmp));
//	return 0;
//}