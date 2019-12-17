#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//typedef struct ListNode
//{
//	int data;
//	ListNode* next;
//}ListNode;
//
//typedef struct List
//{
//	ListNode*first;
//	ListNode*last;
//	size_t sz;
//}List;
//
//ListNode*buynode(int x)
//{
//	ListNode* s = (ListNode*)malloc(sizeof(ListNode));
//	s->data = x;
//	s->next = NULL;
//	return s;
//}
//void ListNodeInit(List*mylist)
//{
//	ListNode*s = buynode(0);
//	mylist->first = mylist->last = s;
//	mylist->sz = 0;
//}
//void ListPushBack(List*mylist, int x)
//{
//	ListNode*s = buynode(x);
//	mylist->first->next = s;
//	mylist->last = s;
//	mylist->sz++;
//}
//void main()
//{
//	List mylist;
//	ListNodeInit(&mylist);
//	ListPushBack(&mylist, 1);
//	ListPushBack(&mylist, 2);
//	ListPushBack(&mylist, 3);
//	ListPushBack(&mylist, 4);
//}

//typedef struct Stack
//{
//	int *base;
//	int capacity;
//	int top;
//}Stack;
//void StackInit(Stack*st)
//{
//	st->base = (int*)malloc(sizeof(int)*20);
//	st->capacity = 20;
//	st->top = 0;
//}
//
//void StackPush(Stack*st, int x)
//{
//	st->base[st->top] = x;
//	st->top++;
//}
//void main()
//{
//	Stack st;
//	StackInit(&st);
//	StackPush(&st, 1);
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//	StackPush(&st, 4);
//	StackPush(&st, 5);
//
//}