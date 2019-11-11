#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


//#define DataType int
//
//
//#define P 13
//typedef struct HashNode
//{
//	DataType data;
//	struct HashNode* link;
//}HashNode;
//
//
//
//typedef HashNode* HashTable[P];
//
//
//
//
//void HashTableInit(HashTable pht);
//bool HashTableInsert(HashTable pht,DataType x);


#define P 7
#define NULL_DATA -1
struct bucket_node
{
	int data[3];
	struct bucket_node*next;
};
struct bucket_node hash_table[P];