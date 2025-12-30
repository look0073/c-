#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//菜单打印
void menu()
{
	printf("***********************\n");
	printf("****   1.play     *****\n");
	printf("****   0.exit     *****\n");
	printf("***********************\n");

}
void Initialize(char arr[ROW][COL], int row, int col)//初始化棋盘
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			arr[i][j] = ' ';
	}
}

	void Print(char arr[ROW][COL], int row, int col) //打印棋盘
	{
		for(int i = 0; i < row; i++)
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

	//void Players(char arr[ROW][COL], int row, int col, int* b)//玩家下棋
	//{
	//	int x = 0;
	//	int y = 0;
	//	int a = 0;
	//
	//	do
	//	{
	//		a = 0;
	//		if (*b == 1)
	//		{
	//			printf("玩家1号下棋");
	//		}
	//		else
	//		{
	//			printf("玩家2号下棋");
	//		}
	//		{
	//			printf("请输入坐标：");
	//			scanf("%d %d", &x, &y);
	//			if (x >= 1 && y >= 1 && x <= row && y <= col)
	//			{
	//				if (arr[x - 1][y - 1] == ' ')
	//				{
	//		
	//					if (*b == 1)
	//					{
	//						arr[x - 1][y - 1] = '*';
	//						*b = 2;
	//						
	//					}
	//					else
	//					{
	//						arr[x - 1][y - 1] = '#';
	//						*b = 1;
	//					
	//					}
	//				}
	//				else
	//				{
	//					printf("被占用，请重输");
	//					a = 1;
	//					
	//				}
	//			}
	//			else
	//			{
	//				printf("非法输入，请重输");
	//				a = 1;
	//			}
	//		}
	//	} while (a);
	//}
	void Computer(char arr[ROW][COL], int row, int col) //电脑下棋
	{
		srand(time(NULL));
		int x = 0;
		int y = 0;
		printf("电脑下棋\n");
		while (1)
		{
			x = rand() % row;
			y = rand() % col;
			if (arr[x][y] == ' ')
			{
				arr[x][y] = '#';
				break;
			}
		}
	}


	void Players(char arr[ROW][COL], int row, int col, int* b)//玩家下棋
	{
		int x = 0;
		int y = 0;
		while (1)
		{
			printf("玩家1号下棋");
			printf("请输入坐标：");
			scanf("%d %d", &x, &y);
			if (x >= 1 && y >= 1 && x <= row && y <= col)
			{
				if (arr[x - 1][y - 1] == ' ')
				{
					arr[x - 1][y - 1] = '*';
					break;
				}
				else
				{
					printf("被占用，请重输");
				}
			}
			else
			{
				printf("非法输入，请重输");

			}
		}
	}
	char panduan(char arr[ROW][COL], int row, int col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
				if (arr[i][j] ==' ')
					return 0;
		}
		return 1;
	}
	char Inwin(char arr[ROW][COL], int row, int col)
	{
		for (int i = 0; i < row; i++)
		{
			if (arr[i][0] == arr[i][1] && arr[i][2] == arr[i][1] && arr[i][1] != ' ')
			{
				return arr[i][1];
			}

		}
		for (int j = 0; j < col; j++)
		{
			if (arr[0][j] == arr[1][j] && arr[2][j] == arr[1][j] && arr[1][j] != ' ')
			{
				return arr[1][j];
			}
		}
		if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
		{
			return arr[1][1];
		}
		if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2] && arr[1][1] != ' ')
		{
			return arr[1][1];
		}
		if (panduan(arr, ROW, COL))
		{		return 'q';
	}
		return 'c';
	
	}