#define _CRT_SECURE_NO_WARNINGS 1

//std input output - 标准输入输出头文件
#include<stdio.h>
//
////主函数-main函数
//int main()
//{
//	//printf - 库函数 - C语言库 - 打招呼 - 引头文件
//	printf("hello bit\n");//print functin - 打印函数- 用来在屏幕上打印数据-输出
//	return 0;
//}

////main函数-主函数-程序的入口
////main有且仅有一个
//
//int main()
//{
//	printf("hehehe\n");
//	printf("hehehe\n"); 
//	printf("hehehe\n");
//	printf("hehehe\n");
//	printf("hehehe\n");
//	return 0;
//}

////int--整形的意思
//int main()
//{
//	return 0;
//}
//
//void main()
//{
//	
//}

//int main()
//{
//	int age = 0;
//	//输入一个数字到age
//	scanf("%d", &age);//100
//	//scanf 和 printf是一对
//	printf("%d\n", age);//100
//	return 0;
//}
////
////strcpy
////strcat
////

//身高 - 180 - 整形
//体重49.6 - 小数-浮点数
//名字 - Lily

//int main()
//{
//	//float weight = 49.5f;//double
//	//printf("weight = %f\n", weight);
//	//int high = 180;
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", sizeof(char));		//1 - 单位 - 字节
//	//printf("%d\n", sizeof(short));		//2
//	//printf("%d\n", sizeof(int));		//4 - sizeof(long)>=sizeof(int)
//	//printf("%d\n", sizeof(long));		//4
//	//printf("%d\n", sizeof(long long));	//8
//	//printf("%d\n", sizeof(float));		//4
//	//printf("%d\n", sizeof(double));		//8
//	double salary = 10000.0;//8字节 - salary变量向内存申请8个字节的空间，用来存放10000.0
//	int age = 10;//向内存申请2个字节的空间
//	short num = 10;//2字节
//
//	return 0;
//}

//int main()
//{
//	int max = 10000;
//
//	return 0;
//}

//int b = 10000;//全局变量
//
//void test()
//{
//	int c = 0;//局部变量
//}
//
//int main()
//{
//	//{}-代码块
//	//在代码块内部定义的变量-局部变量
//	//在代码块外部定义的变量-全局变量
//	int a = 10;//局部变量
//
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;
//		printf("1-->a = %d\n", a);
//	}
//	printf("2-->a = %d\n", a);
//	return 0;
//}

//int a = 1000;
//
//int main()
//{
//	int a = 10;
//	printf("a = %d\n", a);
//	//局部变量和全局变量名字冲突的情况下，局部变量优先
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个加数:>");
//	scanf("%d%d",&num1,&num2);//10 20
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

////作用域
////局部变量的作用域
////局部变量所在的局部范围-代码块
//
//
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("a = %d\n", a);
//	return 0;
//}

////全局变量的作用域
////全局变量的作用域是整个工程
//int num = 1000;
//
//void test()
//{
//	printf("3:num = %d\n", num);
//}
//
//int main()
//{
//	printf("1:num = %d\n", num);
//	{
//		printf("2:num = %d\n", num);
//	}
//	test();
//	return 0;
//}

//声明一下外部标识符
extern int g_val;

int main()
{
	printf("g_val = %d\n", g_val);
	return 0;
}