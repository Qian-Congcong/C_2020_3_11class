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

////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
////arr��һ������һά���顣
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

////��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
////���磺2 + 22 + 222 + 2222 + 22222
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
////���0��100000֮������С�ˮ�ɻ������������
////��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���
////������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
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
//		//1.��λ��
//		int ret = DigitNum(i);
//		//2.����ÿһλ�Ĵη���
//		int sum = PowSum(i, ret);
//		//3.�ж�
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
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ���ж����ֵ�λ��
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. �ж�
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
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < line - 1; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}