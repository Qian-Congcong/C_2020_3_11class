#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//
////ʵ��һ���������ж�һ�����ǲ�����������������ʵ�ֵĺ�����ӡ100��200֮���������
//int is_prime(int n)
//{
//	int i = 0;
//	if (n <= 1)//�����������жϺ�����������С��2���������
//		return 0;
//	else
//	{
//		for (i = 2; i <= sqrt(n); i++)
//		{
//			if (n%i == 0)
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("count = %d\n", count);
//	return 0;
//}


////ʵ�ֺ����ж�year�ǲ������ꡣ
//int is_leap_year(int i)
//{
//	return((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0));
//	//if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		//return 1;
//	//else
//		//return 0;
//}
//
//int main()
//{
//	int i = 0;
//	printf("���������:>");
//	scanf("%d", &i);
//	if (is_leap_year(i) == 1)
//		{
//			printf("������\n");
//		}
//		else
//			printf("��������\n");
//	return 0;
//}


////ʵ��һ�������������������������ݡ�
//void swap(int *pc ,int *ps)
//{
//	int tmp = 0;
//	tmp = *pc;
//	*pc = *ps;
//	*ps = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	printf("������a��b:>");
//	scanf("%d%d", &a, &b);
//	printf("a = %d b = %d\n", a, b);
//	swap(&a,&b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ�������
//is_Table(int i,int j,int k)
//{
//	for (i = 1; i <= k; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	printf("������:>");
//	scanf("%d", &k);
//	is_Table(i,j,k);
//	//for (i = 1; i < 10; i++)
//	//{
//	//	for (j = 1; j <= i; j++)
//	//	{
//	//		printf("%d*%d=%-2d\t", i, j, i*j);
//	//	}
//	//	printf("\n");
//	//}*/
//	return 0;
//}

//����Ļ�����9 * 9�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//ÿ�δ�ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//

////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	printf("����������:>");
//	scanf("%d", &num);//123
//	Print(num);
//
//	//Print(123)
//	//Print(12) + 3
//	//Print(1) + 2 + 3
//	//1 2 3
//
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
int Fac(int n)
{

}

int main()
{
	int input = 0;
	scanf("%d", &input);

	int ret = Fac(input);
	printf("ret = %d\n", ret);
	return 0;
}