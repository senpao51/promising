//#define _CRT_SECURE_NO_WARNINGS 1
//#include "hashtable.h"
////哈希表的初始化
//void HashTableInit(HashTable pht)
//{
//	for (int i = 0; i < P; i++)
//		pht[i] = NULL;
//}
//
//DataType Hash(DataType x)
//{
//	return (x%P);
//}
////哈希表的插入
//bool HashTableInsert(HashTable pht, DataType x)
//{
//	int index = Hash(x);
//	HashNode*p = (HashNode*)malloc(sizeof(HashNode));
//	if (p == NULL)
//		return false;
//	p->data = x;
//	p->link = pht[index];
//	pht[index] = p;
//	return true;
//}
//
//HashNode*HashTableFind(HashTable pht, DataType key)
//{
//	int index = Hash(key);
//	HashNode* p = pht[index];
//	while (p != NULL&&p->data != key)
//		p = p->link;
//	return p;
//}
//bool HashTableRemove(HashTable pht, DataType key)
//{
//	int index = Hash(key);
//	HashNode*pre = pht[index];
//	HashNode* p = HashTableFind(pht,key);
//	if (p == NULL)
//		return false;
//	if (p == pre)
//	{
//		pht[index] = p->link;
//	}
//	else
//	{
//		while (pre->link != p)
//			pre = pre->link;
//		pre->link = p->link;
//	}
//	free(p);
//	p = NULL;
//	return true;
//}
//
//
//void HashTableShow(HashTable pht)
//{
//	for (int i = 0; i < P; i++)
//	{
//		HashNode* p = pht[i];
//		printf("%d:",i);
//		while (p!= NULL)
//		{
//			printf("%d-->", p->data);
//			p = p->link;
//		}
//		printf("Nul.\n");
//	}
//}