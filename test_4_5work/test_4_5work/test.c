#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//1. ���������±�left��right��left�����������ʼλ�ã�right�������������һ��Ԫ�ص�λ��
//2. ѭ������һ�²���
//a.���left��right��ʾ������[left, right]��Ч������b���������ѭ��
//b.left��ǰ�����ң��ҵ�һ��ż����ֹͣ
//c.right�Ӻ���ǰ�ң��ҵ�һ��������ֹͣ
//d.���left��right���ҵ��˶�Ӧ�����ݣ��򽻻�������a��

//void ArraySort(int* str, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		//��ǰ������ż�����ҵ���ֹͣ
//		while ((left < right) && (str[left] % 2 == 0))
//		{
//			left++;
//		}
//		//�Ӻ���ǰ���������ҵ���ֹͣ
//		while ((left < right) && (str[right] % 2 == 1))
//		{
//			right--;
//		}
//		//�ҵ��󻥻�λ��
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
//	printf("�����������С��>");
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




//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

/*
˼·��
1. 20Ԫ���ȿ��Ժ�20ƿ����ʱ������20����ƿ��
2. ������ƿ�ӿ��Ժ�һƿ������֮�󣬿�ƿ��ʣ�ࣺempty/2(������ƿ�ӻ��ĺ���������ƿ��) + empty%2(��������ƿ��)
3. ���ƿ�Ӹ�������1�������Լ����������ظ�2
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
//	//����1
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

//// ������������������ˮ����ƿ�ӻ��Ĺ���Ļ������Է��֣���ʵ���Ǹ��Ȳ����У�money*2-1
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//����2
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