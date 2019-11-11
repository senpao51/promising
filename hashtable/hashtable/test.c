#define _CRT_SECURE_NO_WARNINGS 1
#include "hashtable.h"
//int main()
//{
//	int i = 0;
//	int arr[] = {49,38,65,97,76,13,27};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	HashTable ht;
//	HashTableInit(ht);
//	for (i = 0; i < sz; i++)
//	{
//		HashTableInsert(ht, arr[i]);
//	}
//	return 0;
//}
void Init_bucket_node()
{
}
int Hash(int x)
{
	return (x%P);
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
	struct bucket_node*p = (struct bucket_node*)malloc(sizeof(struct bucket_node));

}
int main()
{
	Init_bucket_node(); 
	int array[] = { 15, 14, 21, 87, 96, 293, 35, 24, 149, 19, 63, 16, 103, 77, 5, 153, 145, 356, 51, 68, 705, 453 };
	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		Insert_new_element(array[i]);
	}
	return 0;
}