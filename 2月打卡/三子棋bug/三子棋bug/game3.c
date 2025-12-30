#define _CRT_SECURE_NO_WARNINGS
#include "game3.h"
void menu()
{
	printf("*************************\n");
	printf("****    1.play  *********\n");
	printf("****    2.exit  *********\n");
	printf("*************************\n");
	printf("请输入你的选项：");

}
void xuanze()
{
	printf("*************************\n");
	printf("****    1.玩家与玩家 ****\n");
	printf("****    2.玩家与电脑 ****\n");
	printf("*************************\n");
	printf("请输入你的选项：");
	int xz = 0;
		scanf("%d", &xz);
		if (xz == 1)
		{
			printf("你选择了玩家与玩家对战\n");
			game(xz);
		}
		else if (xz == 2)
		{
			printf("你选择了玩家与电脑对战\n");
			xz = 2;
			game(xz);
		}

}
void Initialize(char arr[3][3], int row, int col)//初始化棋盘
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			arr[i][j] = ' ';
	}
}

void Print(char arr[3][3], int row, int col)//打印棋盘
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)
				{ printf("|"); 
				}
			}
		printf("\n");
	}
	
}

char Player(char arr[3][3], int row, int col,int *b)//玩家下棋
{
	int x = 0;
	int y = 0;
	int a = 0;
	
	do
	{
		if (*b == 1)
		{
			printf("玩家1号下棋；");
	}
		else {
			printf("玩家2号下棋；");
		}
		
		printf("请输入坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (arr[x - 1][y - 1] == ' ' && *b ==1)
			{
				arr[x - 1][y - 1] = '*';
				(*b)++;
				break;
			}
			else if (arr[x - 1][y - 1] == ' ' && *b == 2)
			{
				arr[x - 1][y - 1] = '#';
				(*b)-- ;
				break;
			}
			
			else
			{
				printf("被占用，请重选\n");
				a = 1;
			}
		}
		else {
			printf("非法输入，请重输\n");
			a = 1;
		}
	} while (a);
}

