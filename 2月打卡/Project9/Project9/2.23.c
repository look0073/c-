#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
int main()
{
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请输入你的选项：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("三子棋游戏开始\n");
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
void game()
{
	char arr[3][3] = { 0 };
	CSH(arr, 3, 3);//初始化棋盘
	DF(arr, 3, 3);//规划棋盘
	while (1)
	{
		Play(arr, 3, 3);//玩家下棋
		DF(arr, 3, 3);
		CP(arr, 3, 3);
	}
}