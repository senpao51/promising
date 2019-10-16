#define _CRT_SECURE_NO_WARNINGS 1
#include "slist.h"
#include "sclist.h"
#include "dlist.h"
#include "dclist.h"
void menu()
{
	printf("**********************************\n");
	printf("*[1]:push_back    [2]:push_front *\n");
	printf("*[3]:pop_back     [4]:pop_front  *\n");
	printf("*[5]:delete_pos   [6]:delete_val *\n");
	printf("*[7]:find_pos     [8]:find_val   *\n");
	printf("*[9]:modify_pos   [10]:modify_val*\n");
	printf("*[11]:insert_pos  [12]:insert_val*\n");
	printf("*[13]:show        [14]:length    *\n");
	printf("*[15]:clear       [16]:sort      *\n");
	printf("*[17]:reverse     [0]:exit       *\n");
	printf("**********************************\n");

}
int main()
{
	DClistNode *p;
	DataType x = 0;
	int input = 0;
	int pos = 0;
	int val = 0;
	DataType flag = 0;
	//Slist mylist;
	//SClist mylist;
	DClist mylist;
	//SlistInit(&mylist);
	//SClistInit(&mylist);
	DClistInit(&mylist);
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
				  printf("请输入要插入的数,以-1结束\n");
				  while (scanf("%d",&x)&&x!=-1)
				  {
					  //SlistPushBack(&mylist, x);
					 // SClistPushBack(&mylist, x);
					  DClistPushBack(&mylist, x);
				  }
				  break;
		}
		case 2:
		{
				  printf("请输入要插入的数,以-1结束\n");
				  while (scanf("%d",&x)&&x!=-1)
				  {
					  //SlistPushFront(&mylist,x);
					 // SClistPushFront(&mylist, x);
					  DClistPushFront(&mylist, x);
				  }
				  break;
		}
		case 3:
		{
				  //SlistPopBack(&mylist);
				 // SClistPopBack(&mylist);
				  DClistPopBack(&mylist);
				  break;
		}
		case 4:
		{
				  //SlistPopFront(&mylist);
				 // SClistPopFront(&mylist);
				  DClistPopFront(&mylist);
				  break;
		}
		case 5:
		{
				  printf("请输入要删除的位置:");
				  scanf("%d", &pos);
				  //SlistDeletePos(&mylist,pos);
				  break;
		}
		case 6:
		{
				  printf("请输入要删除的数:");
				  scanf("%d", &val);
				 // SlistDeleteVal(&mylist,val);
				  DClistDeleteVal(&mylist, val);
				  break;
		}
		case 7:
		{
				  printf("请输入要查找的位置:");
				  scanf("%d", &pos);
				  //SlistFindPos(&mylist, pos);
				  flag = DClistFindPos(&mylist, pos);
				  if (-1 == flag)
					  printf("位置错误\n");
				  else
					  printf("该位置的数为%d\n",flag);
				  break;
		}
		case 8:
		{
				  printf("请输入要查找的数:");
				  scanf("%d", &val);
				  //SlistFindVal(&mylist, val);
				  p = DClistFindVal(&mylist, val);
				  break;
		}
		case 9:
		{
				  printf("请输入要修改的位置\n");
				  scanf("%d", &pos);
				  printf("请输入要修改的值\n");
				  scanf("%d", &val);
				  SlistModifyPos(&mylist,pos,val);
				  break;
		}
		case 10:
		{
				   printf("请输入要修改的值\n");
				   scanf("%d", &val);
				   printf("请输入要修改到的位置\n");
				   scanf("%d", &pos);
				  // SlistModifyVal(&mylist,val,pos);
				   break;
		}
		case 11:
		{
				   printf("请输入要插入的位置\n");
				   scanf("%d", &pos);
				   printf("请输入要插入的值\n");
				   scanf("%d", &val);
				   break;
		}
		case 12:
		{
				   printf("请输入要插入的值\n");
				   scanf("%d", &val);
				   //SlistInsertVal(&mylist,val);
				   DClistInsertVal(&mylist, val);
				   break;
		}
		case 13:
		{
				   //SlistShow(&mylist);
				   //SClistShow(&mylist);
				   DClistShow(&mylist);
				   break;
		}
		case 14:
		{
				   //printf("链表的大小为：%d\n", SlistLength(&mylist));
				   //printf("链表的大小为：%d\n", SClistLength(&mylist));
				   printf("链表的大小为：%d\n", DClistLength(&mylist));
				   break;
		}
		case 15:
		{
				   //SlistClear(&mylist);
				  // SClistClear(&mylist);
				   DClistClear(&mylist);
				   break;
		}
		case 16:
		{	
				   //SlistSort(&mylist);
				   DClistSort(&mylist);
				   break;
		}
		case 17:
		{
				  // SlistReserve(&mylist);
				   DClistReserve(&mylist);
				   break;
		}
		case 0:
		{
				  printf("退出程序\n");
				  break;
		}
		default:
		{
				   printf("选择错误，请重新选择\n");
				   break;
		}
		}
	} while (input);
	//SlistDestroy(&mylist);
	DClistDestroy(&mylist);
	return 0;
}
