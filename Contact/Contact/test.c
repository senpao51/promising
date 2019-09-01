#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void MainMenu()
{
	printf("*****************************\n");
	printf("**   1.add       2.del     **\n");
	printf("**   3.modify    4.sort    **\n");
	printf("**   5.show      6.search  **\n");
	printf("**   0.exit                **\n");
	printf("*****************************\n");

}
int main()
{
	Contact con; 
	int input = 0;
	InitContact(&con);
	do
	{
		MainMenu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DestroyContact(&con);
			printf("退出\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
	} 
	while (input);
	return 0;
}