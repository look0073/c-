#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#pragma comment(lib,"add.lib")
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,& b);
//	int c = add(a, b);
//	int sar = set(a, b);
//	printf("结果=%d", c);
//	printf("结果=%d", sar);
//	return 0;
//}

#include<stdio.h>
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);

	}
	printf("  %d  ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	printf("%u  ", num);
	return 0;

}