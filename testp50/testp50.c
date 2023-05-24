#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//2023.05.23
//p50 函数递归2

//练习2 编写函数不允许创建临时变量，求字符串的长度====================

//int my_strlen(char* str)
//{
//	/*int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/ //不能用临时变量
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));//数组名传参传的是数组首元素的地址
//
//	return 0;
//}


//练习3  求n的阶乘（不考虑溢出）====================================
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入 n = ");
//	scanf("%d", &n);
//
//	ret = factorial(n);
//	printf("n的阶乘 = %d", m);
//
//	return 0;
//}


//练习4  求第n个斐波那契数 =================================
//Fib(n) = Fib(n-1) + Fib(n-2) (当n>2)

//递归可以求解，但效率太低
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;//统计第三个斐波那契数的总共计算次数
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//n<=2时，返回1
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("count = %d", count);
//	return 0;
//}
 

//练习 求10个数中的最大值 =====================================
//int main()
//{
//	int arr[10] = { -1,3,-5,6,7,8,9,4,3,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}



//练习 打印9*9乘法表 ==========================================
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
int main()
{
	int i = 1;
	//行数
	for (i = 1; i <= 9; i++)
	{
		//列数
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %-2d  ", i, j, i * j);
			//                %2d  打印2位，右对齐，不够用空格填充
			//                %-2d 打印2位，左对齐，不够用空格填充
		}
		printf("\n");
	}
	return 0;
}
