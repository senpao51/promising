#define _CRT_SECURE_NO_WARNINGS 1
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//#include <stdio.h>
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if (A!=B&&A != C&&A != D&&A != E&&B != C&&B != D&&B != E&&C != D&&C != E&&D != E)
//						{
//							if (((B==2) + (A==3)) == 1 && ((B == 2) + (C == 4)) == 1 && ((C == 1) + (D == 2)) ==1 && ((C == 5) + (D == 3)) == 1 && ((E == 4) + (A == 1)) == 1)
//							{
//								printf("A第%d B第%d C第%d D第%d E第%d\n", A, B, C, D, E);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//};
//int main()
//{
//	struct Stu  s= {"张三",20,"男"};
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	return 0;
//}
//#include <stdio.h>
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//};
//void Print(struct Stu*p)
//{
//	printf("%s %d %s\n",p->name,p->age,p->sex);
//}
//int main()
//{
//	struct Stu s = { "张三", 20, "男" };
//	Print(&s);
//	return 0;
//}
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//
//#include <stdio.h>
//int main()
//{
//	char killer = '0';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c\n",killer);
//		}
//	}
//	return 0;
//}
//3.在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//
//#include <stdio.h>
//void Print(int arr[5][5])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			if (0 == j || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			arr[i+1][j+1]=arr[i][j] + arr[i][j + 1];
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[5][5] = { 0 };
//	Print(arr);
//	return 0;
//}