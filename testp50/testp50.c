#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//2023.05.23
//p50 �����ݹ�2

//��ϰ2 ��д��������������ʱ���������ַ����ĳ���====================

//int my_strlen(char* str)
//{
//	/*int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/ //��������ʱ����
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));//���������δ�����������Ԫ�صĵ�ַ
//
//	return 0;
//}


//��ϰ3  ��n�Ľ׳ˣ������������====================================
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
//	printf("������ n = ");
//	scanf("%d", &n);
//
//	ret = factorial(n);
//	printf("n�Ľ׳� = %d", m);
//
//	return 0;
//}


//��ϰ4  ���n��쳲������� =================================
//Fib(n) = Fib(n-1) + Fib(n-2) (��n>2)

//�ݹ������⣬��Ч��̫��
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;//ͳ�Ƶ�����쳲����������ܹ��������
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
//	int c = 1;//n<=2ʱ������1
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
 

//��ϰ ��10�����е����ֵ =====================================
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



//��ϰ ��ӡ9*9�˷��� ==========================================
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
int main()
{
	int i = 1;
	//����
	for (i = 1; i <= 9; i++)
	{
		//����
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %-2d  ", i, j, i * j);
			//                %2d  ��ӡ2λ���Ҷ��룬�����ÿո����
			//                %-2d ��ӡ2λ������룬�����ÿո����
		}
		printf("\n");
	}
	return 0;
}
