#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int nums[] = { 2, 7, 11, 15 };
//	int target = 9;
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (nums[i] + nums[j] == target)
//				
//				return j;
//		}
//		return i;
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

////写一个函数打印arr数组的内容，不使用数组下标，使用指针。
////arr是一个整形一维数组。
//
//void PrintFun(int* str, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(str + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	PrintFun(arr, sz);
//	//int* p = arr;
//
//	/*int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	return 0;
//}

//#include <string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//void Reverse_string(char* str)
//{
//		char tmp = *str;
//		int len = my_strlen(str);
//		*str = *(str + (len - 1));
//		*(str + (len - 1)) = '\0';
//		if (my_strlen(str + 1) >= 2)
//			Reverse_string(str + 1);
//		*(str + (len - 1)) = tmp;
//}
//
////void Reverse(char* str)
////{
////	char* left = str;
////	char* right = str + strlen(str) - 1;
////	while (left < right)
////	{
////		char temp = *left;
////		*left = *right;
////		*right = temp;
////		++left;
////		--right;
////	}
////}
//
//int main()
//{
//	char str[101] = { 0 };
//	while (gets(str))
//	{
//		//Reverse(str);
//		Reverse_string(str);
//		printf("%s\n", str);
//		memset(str, 0, sizeof(str) / sizeof(str[0]));
//	}
//	return 0;
//}

////求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
////例如：2 + 22 + 222 + 2222 + 22222
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	//int i = 0;
//	int tmp = 0;
//	int sum = 0;
//	/*for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum = sum + tmp;
//	}*/
//	while (n)
//	{
//		tmp = tmp * 10 + a;
//		sum = sum + tmp;
//		n--;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//#include <math.h>
////求出0～100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数
////本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//int DigitNum(int n)
//{
//	int count = 1;
//	while (n / 10)
//	{
//		count++;
//		n = n / 10;
//	}
//	return count;
//}
//
//int PowSum(int n, int ret)
//{
//	int sum = 0;
//	while (n)
//	{
//		sum = sum + pow(n % 10, ret);
//		n = n / 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	//int num = 0;
//	//scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i <= 99999; i++)
//	{
//		//1.几位数
//		int ret = DigitNum(i);
//		//2.计算每一位的次方和
//		int sum = PowSum(i, ret);
//		//3.判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}



int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);//7

	for (i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < line - 1; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}