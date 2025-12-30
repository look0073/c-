#define _CRT_SECURE_NO_WARNINGS
#include "game2.h"
void menu()
{
	printf("*************************\n");
	printf("****    1.play  *********\n");
	printf("****    2.exit  *********\n");
	printf("*************************\n");
	printf("请输入你的选项：");

}
void Initialize(char arr[3][3], int row, int col)//初始化棋盘
{
	for (int i = 0; i < row;i++)
	{
		for (int j = 0; j < col; j++)
			arr[i][j] = ' ';
	}
}

void Print(char arr[3][3], int row, int col)//打印棋盘
{
	for(int i=0;i<row;i++)
	{
		printf(" %c | %c | %c ", arr[i][0], arr[i][1], arr[i][2]);
	}
	
}