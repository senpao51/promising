#define _CRT_SECURE_NO_WARNINGS 1
//1.дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	���� 1��λ�� 
//}

//#include <stdio.h>
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		if ((value & 1) == 1)
//		{
//			count++;
//      }
//		value = value >> 1;
//   }
//		return count;
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	scanf("%d",&input);
//	ret = count_one_bits(input);
//	printf("%d",ret);
//	return 0;
//}

//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//#include <stdio.h>
//void JIInPut(int input)
//{
//	int i = 0;
//	printf("����λΪ\n");
//	while (i<16)
//	{
//		printf("%d ",input&1);
//		input = input >> 2;
//		i++;
//	}
//}
//void OUInPut(int input)
//{
//	int i = 0;
//	printf("ż��λΪ\n");
//	printf(" ");
//	input = input >> 1;
//	while (i < 16)
//	{
//		printf("%d ", input&1);
//		input = input >> 2;
//		i++;
//	}
//}
//int main()
//{
//	int input = 0;
//	scanf("%d",&input);
//	JIInPut(input);
//	printf("\n");
//   OUInPut(input);
//	return 0;
//}

//3.���һ��������ÿһλ��
//#include <stdio.h>
//void every(unsigned int a)
//{
//	if (a > 9)
//	{
//		printf("%d ", a % 10);
//		a = a / 10;
//		every(a);
//	}
//	else
//	{
//		printf("%d",a);
//	}
//
//}
//int main()
//{
//	int input = 0;
//	scanf("%d",&input);
//	every(input);
//	return 0;
//}

//4.����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//011111001111
//100011111011


//#include <stdio.h>
//int Find(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	while (i<32)
//	{
//		if ((m & 1) != (n & 1))
//		{
//			count++;
//		}
//			m = m >> 1;
//			n = n >> 1;
//		    i++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//	scanf("%d %d",&m,&n);
//	ret = Find(m, n);
//	printf("%d",ret);
//	return 0;
//}
