#define _CRT_SECURE_NO_WARNINGS 1
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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
//								printf("A��%d B��%d C��%d D��%d E��%d\n", A, B, C, D, E);
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
//	struct Stu  s= {"����",20,"��"};
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
//	struct Stu s = { "����", 20, "��" };
//	Print(&s);
//	return 0;
//}
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
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
//3.����Ļ�ϴ�ӡ������ǡ�
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