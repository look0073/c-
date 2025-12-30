#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("***********************\n");
	printf("****   1.play     *****\n");
	printf("****   0.exit     *****\n");
	printf("***********************\n");

}
int main()
{
	int a = 0;
	do
	{

		//打印菜单让用户进行选择
		menu();
		printf("请输入你的选项：");
		scanf(" %d", &a);
		switch (a)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输出错误请重新输入\n");
			break;
		}
	} while (a);
	return 0;
}