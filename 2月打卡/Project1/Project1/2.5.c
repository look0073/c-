#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum = sum - (1.0 / i);
//		if (i % 2 != 0)
//			sum = sum +(1.0 / i);
//	}
//	printf("%lf", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,10,45 };
//	int mix = arr[0];
//	int i = 0;
//	for (i = 1; i <10; i++)
//	{
//		if (arr[i] <arr[0])
//		{
//			mix = arr[i];
//		}
//	}
//	printf("%d", mix);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for(j=1;j<=i;j++)
//		{ 
//			printf("%d*%d=%-2d  ", j,i,i * j);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}






////猜数字游戏
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() 
//{
//		// 使用当前时间作为随机数种子
//		srand((unsigned int)time(NULL));
//		// 生成一个随机数
//		int a = rand()%101;
//	int b = 0;
//	printf("%d\n", a);
//	int i = 0;
//	printf("猜数字游戏开始，你一共有三次机会\n");
//	for(i = 1; i <= 3; i++)
//	{
//		printf("请输入第%d次你要猜的数字:",i);
//		scanf("%d", &b);
//		if (a > b)
//		{
//			printf("猜小了\n");
//			continue;
//		}
//		if (a < b)
//		{
//			printf("猜大了\n");
//			continue;
//		}
//		if (b == a)
//		{
//			printf("恭喜你猜对了");
//			break;
//		}
//	}
//	return 0;
//}
  





////深度理解一下哪个是形参和实参
//#include<stdio.h>
////下面这三行代码是形参，因为它是接受外部的值的
//int add(int x, int y)
//{
//	return x + y;
//}
////下面的代码中a和b就是实参，因为它是实际存在的
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}






