#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}


////дһ���������ز����������� 1 �ĸ�����
////���磺 15    0000 1111    4 �� 1
//int PrintNum(int num)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		if (num & 1)
//		{
//			count++;
//		}
//		num = num >> 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = PrintNum(num);
//	printf("%d ��1\n",ret );
//	return 0;
//}

////����������ʱ������������������������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d b = %d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//���������������в�ͬλ�ĸ���
int PrintNum(int m, int n)
{
	int i = 0;
	int count = 0;
	int num = m^n;
	for (i = 1; i <= 32; i++)
	{
		if (num & 1)
		{
			count++;
		}
		num = num >> 1;
	}
	return count;
}

int main()
{
	int m = 1999;
	int n = 2299;
	scanf("%d%d", &m, &n);
	//int i = 0;
	////7
	//int count = 0;
	//int ret = m^n;
	//for (i = 1; i <= 32; i++)
	//{
	//	if (ret & 1)
	//	{
	//		count++;
	//	}
	//	ret = ret >> 1;
	//}
	//printf("%d\n", count);
	int ret = PrintNum(m, n);
	printf("%d\n", ret);
	return 0;
}
