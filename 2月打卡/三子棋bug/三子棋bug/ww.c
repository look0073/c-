#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int xz = 0;
	do
	{
		printf("*************************\n");
		printf("****    1.玩家与玩家 ****\n");
		printf("****    2.玩家与电脑 ****\n");
		printf("*************************\n");
		printf("请输入你的选项：");
		scanf("%d", &xz);
		if (xz != 1 && xz != 2)
			printf("输入有误，请重新输入\n");
		else
		{
			game(xz);
		}

	} while (xz != 1 && xz != 2);
	
	return 0;

}
void game(int XZ)
{
	if (XZ == 1)
	{

	}
}