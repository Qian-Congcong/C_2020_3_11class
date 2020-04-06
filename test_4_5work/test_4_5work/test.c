#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//1. 给定两个下标left和right，left放在数组的起始位置，right放在数组中最后一个元素的位置
//2. 循环进行一下操作
//a.如果left和right表示的区间[left, right]有效，进行b，否则结束循环
//b.left从前往后找，找到一个偶数后停止
//c.right从后往前找，找到一个奇数后停止
//d.如果left和right都找到了对应的数据，则交换，继续a，

//void ArraySort(int* str, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		//从前往后找偶数，找到后停止
//		while ((left < right) && (str[left] % 2 == 0))
//		{
//			left++;
//		}
//		//从后往前找奇数，找到后停止
//		while ((left < right) && (str[right] % 2 == 1))
//		{
//			right--;
//		}
//		//找到后互换位置
//
//		if (left < right)
//		{
//			tmp = str[left];
//			str[left] = str[right];
//			str[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[100] = {0};//{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = 0;
//	int i = 0;
//	printf("请输入数组大小：>");
//	scanf("%d", &sz);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	ArraySort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}




//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

/*
思路：
1. 20元首先可以喝20瓶，此时手中有20个空瓶子
2. 两个空瓶子可以喝一瓶，喝完之后，空瓶子剩余：empty/2(两个空瓶子换的喝完后产生的瓶子) + empty%2(不够换的瓶子)
3. 如果瓶子个数超过1个，可以继续换，即重复2
*/
int main()
{
	int money = 0;
	scanf("%d", &money);
	int empty = 0;
	int sum = 0;
	empty = money;
	sum = money;
	while (empty != 1)
	{
		sum = sum + (empty / 2);
		empty = (empty / 2) + (empty % 2);
		
	}
	printf("%d\n", sum);

	return 0;
}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法1
//	total = money;
//	empty = money;
//	while (empty>1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//
//	return 0;
//}

//// 方法二：按照上述喝水和用瓶子换的规则的话，可以发现，其实就是个等差数列：money*2-1
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法2
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//
//
//	return 0;
//}