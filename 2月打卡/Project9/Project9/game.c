#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("***********************\n");
	printf("****   1.play     *****\n");
	printf("****   0.exit     *****\n");
	printf("***********************\n");

}
void CSH(char arr[3][3], int row, int col)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			arr[i][j] = ' ';
	}
}
void DF(char arr[3][3], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//打印数据
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割行
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void Play(char arr[3][3], int row, int col)
{
	int x = 0;
	int y = 0;
	do
	{
		printf("玩家下棋，请输入坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x < 3 && y >= 1 && y < 3)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("被占用，请重输\n");
			}
		}
		else
		{
			printf("格式有错，请重新输入\n");
		}

	} while (1);
}
void CP(char arr[3][3], int row, int col)
{

}