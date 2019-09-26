#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
void menu()
{
	printf("**********************************\n");
	printf("*[1]:push_back    [2]:push_front *\n");
	printf("*[3]:pop_back     [4]:pop_front  *\n");
	printf("*[5]:insert_pos   [6]:insert_val *\n");
	printf("*[7]:delete_pos   [8]:delete_val *\n");
	printf("*[9]:find_pos     [10]:find_val  *\n");
	printf("*[11]:modify_pos  [12]:modify_val*\n");
	printf("*[13]:show        [14]:reverse   *\n");
	printf("*[15]:sort        [16]:length    *\n");
	printf("*[17]:clear       [0]:exit       *\n");
	printf("**********************************\n");

}
int main()
{
	SeqList mylist;
	int input = 0;
	SeqListInit(&mylist); 
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
			{
				break;
			}
			case 2:
			{
				break;
			}
			case 3:
			{
				break;
			}
			case 4:
			{
				break;
			}
			case 5:
			{
				break;
			}
			case 6:
			{
				break;
			}
			case 7:
			{
				break;
			}
			case 8:
			{
				break;
			}
			case 9:
			{
				break;
			}
			case 10:
			{
				break;
			}
			case 11:
			{
				break;
			}
			case 12:
			{
				break;
			}
			case 13:
			{
				break;
			}
			case 14:
			{
				break;
			}
			case 15:
			{
				break;
			}
			case 16:
			{
				break;
			}
			case 17:
			{
			 break;
			}
			case 0:
			{
			      printf("退出程序\n");
			      break;
			}
			default:
			{
				printf("输入错误，请重新输入\n");
				break;
			}
		}
	} 
	while (input);
	return 0;
}
