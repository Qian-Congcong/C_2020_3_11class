#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
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


////写一个函数返回参数二进制中 1 的个数。
////比如： 15    0000 1111    4 个 1
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
//	printf("%d 个1\n",ret );
//	return 0;
//}

////不允许创建临时变量，交换两个整数的内容
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


//求两个数二进制中不同位的个数
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
