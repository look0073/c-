#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')//*str是表示的字符
//	{ return 1 + my_strlen(str + 1); //str是一个char*类型的指针表示地址
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//
//}




////写一个数并求出它的阶乘
//#include<stdio.h>
//int fac(int n)
//{
//	if (n >2)
//	{
//		return fac(n - 1)+fac(n - 2);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	printf("");
//	scanf("%d", &a);
//	int b = fac(a);
//	printf("%d", b);
//	return 0;
//
//}


//求最大公约数(辗转相除法）
#include<stdio.h>
int main()
{
	 int a = 0;
	 int b = 0;
	 int c = 0;
	scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", c);
	return 0;
}