#define _CRT_SECURE_NO_WARNINGS 1
#include "hashtable.h"
#define P 7
#define NULL_DATA -1
struct bucket_node
{
	int data[3];
	struct bucket_node*next;
};
struct bucket_node hash_table[P];

typedef struct bucket_node bucket_node;

void Init_bucket_node()
{
	int i = 0;
	for (i = 0; i < P; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
			hash_table[i].data[j] = NULL_DATA;
		hash_table[i].next = NULL;
	}
}

void Init(bucket_node*p)
{
	for (int i = 0; i < 3; i++)
		p->data[i] = NULL_DATA;
	p->next = NULL;
}
int Hash(int x)
{
	return x%P;
}
int Insert_new_element(int new_element)
{
	int index = Hash(new_element);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		if (hash_table[index].data[i] ==NULL_DATA)
		{
			hash_table[index].data[i] = new_element;
			return 0;
		}
	}
	if (hash_table[index].next != NULL)
	{
		bucket_node*tmp;
		bucket_node* p = hash_table[index].next;
		for (int i = 0; i < P; i++)
		{
			if (p->data[i] == NULL_DATA)
			{
				p->data[i] = new_element;
				return 0;
			}
		}
		tmp = (bucket_node*)malloc(sizeof(bucket_node));
		Init(tmp);
		if (tmp == NULL)
			return NULL_DATA;
		tmp->data[0] = new_element;
		hash_table[index].next = tmp;
		tmp->next = p->next;
		return 0;
	}
	else
	{
		bucket_node* p = (bucket_node*)malloc(sizeof(bucket_node));
		Init(p);
		if (p == NULL)
			return NULL_DATA;
		p->data[0] = new_element;
		hash_table[index].next = p;
		return 0;
	}
}
void Show()
{
	for (int i = 0; i < P; i++)
	{
		struct bucket_node *p = hash_table[i].next;
		printf("%d:",i);
		for (int j = 0; j < 3; j++)
		{
			if (hash_table[i].data[j] == NULL_DATA)
				break;
			printf("%d-->",hash_table[i].data[j]);
		}
		while (p!= NULL)
		{
			for (int j = 0; j < 3; j++)
			{
				if (p->data[j] == NULL_DATA)
					break;
				printf("%d-->", p->data[j]);
			}
			p = p->next;
		}
		printf("Nul.\n");
	}
}
int main()
{
	Init_bucket_node(); 
	int array[] = { 15, 14, 21, 87, 96, 293, 35, 24, 149, 19, 63, 16, 103, 77, 5, 153, 145, 356, 51, 68, 705, 453 };
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		Insert_new_element(array[i]);
	}
	Show();
	return 0;
}


//int main()
//{
//	int i = 0;
//	int arr[] = { 27,38,15, 14, 21, 87, 96, 293, 35, 24, 149, 19, 63, 16, 103, 77, 5, 153, 145, 356, 51, 68, 705, 453 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	HashTable ht;
//	HashTableInit(ht);
//	for (i = 0; i < sz; i++)
//	{
//		HashTableInsert(ht, arr[i]);
//	}
//	HashTableShow(ht);
//	printf("////////////////////////////\n");
//	HashTableRemove(ht,153);
//	HashTableShow(ht);
//	return 0;
//}