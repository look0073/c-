#define _CRT_SECURE_NO_WARNINGS
#include "game3.h"
int main()
{
	int input = 0;
	do
	{
		menu();//打印菜单
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			xuanze();//开始玩游戏
			break;
		case 2:
			printf("退出游戏");
			break;
		default:
			printf("输入有误，请重试");
			break;
		}
	} while (input != 2);
	return 0;
}

void game()
{
	char arr[3][3] = { 0 };
	Initialize(arr, 3, 3);
	Print(arr, 3, 3);
	int b = 1;
	while(1)
	{
		Player(arr, 3, 3,&b);
		Print(arr, 3, 3);
	/*	Player2(arr, 3, 3);
		Print(arr, 3, 3);*/
	}
	
}
