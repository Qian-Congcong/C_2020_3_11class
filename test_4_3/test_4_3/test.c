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
//			printf("���Լ���ǣ� %d\n", min);
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
//	//շת�����
//	while (r = m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("���Լ����%d\n", n);
//	return 0;
//}

////1��������
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
////2���ݹ�
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);//str++
//	else
//		return 0;
//}
//
////3��ָ�� - ָ��
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
	//ȷ��ð�����������
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
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

	//дһ��ð����������������arr�ų�����
	PrintArr(arr, sz);
	BubbleSort(arr, sz);
	PrintArr(arr, sz);

	return 0;
}