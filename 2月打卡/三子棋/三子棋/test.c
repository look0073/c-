#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void game()
{
	char arr[ROW][COL] = { 0 };
	//初始化棋盘
	Initialize(arr,ROW,COL);
	Print(arr, ROW, COL);
	int b = 1;
	char ret = 0;
	while (1)
	{
		Players(arr, ROW, COL,&b);
		Print(arr, ROW, COL);
		ret = Inwin(arr, ROW, COL);
		if(ret!='c')
		{
			break;
		}
		Computer(arr, ROW, COL);
		Print(arr, ROW, COL);
		ret = Inwin(arr, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	Print(arr, ROW, COL);
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