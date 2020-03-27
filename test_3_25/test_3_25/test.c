#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//
////实现一个函数，判断一个数是不是素数。利用上面实现的函数打印100到200之间的素数。
//int is_prime(int n)
//{
//	int i = 0;
//	if (n <= 1)//考虑下素数判断函数的输入是小于2的数的情况
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


////实现函数判断year是不是润年。
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
//	printf("请输入年份:>");
//	scanf("%d", &i);
//	if (is_leap_year(i) == 1)
//		{
//			printf("是闰年\n");
//		}
//		else
//			printf("不是闰年\n");
//	return 0;
//}


////实现一个函数来交换两个整数的内容。
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
//	printf("请输入a和b:>");
//	scanf("%d%d", &a, &b);
//	printf("a = %d b = %d\n", a, b);
//	swap(&a,&b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。答题
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
//	printf("请输入:>");
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

//在屏幕上输出9 * 9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//每次打印一行
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

////递归方式实现打印一个整数的每一位
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
//	printf("请输入数字:>");
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

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
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