#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int m = 24;
//	int n = 18;
//	//scanf("%d%d", &m, &n);
//	int min = (m > n ? n : m);
//	while (1)
//	{
//		if (m%min == 0 && n%min == 0)
//		{
//			printf("最大公约数是： %d\n", min);
//			break;
//		}
//		min--;
//	}
//
//	return 0;
//}


//int main()
//{
//	int m = 18;
//	int n = 24;
//	//scanf("%d%d", &m, &n);
//	int r = 0;
//	//辗转相除法
//	while (r = m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("最大公约数：%d\n", n);
//	return 0;
//}

////1、计数器
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
////2、递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);//str++
//	else
//		return 0;
//}
//
////3、指针 - 指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	int len = my_strlen("bit");
//	//[b][i][t][\0]
//	printf("%d\n", len);
//
//	return 0;
//}

void BubbleSort(int* arr, int sz)
{
	int i = 0;
	//确定冒泡排序的趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void PrintArr(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);//*(arr + i)
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	//写一个冒泡排序函数，将数组arr排成升序
	PrintArr(arr, sz);
	BubbleSort(arr, sz);
	PrintArr(arr, sz);

	return 0;
}