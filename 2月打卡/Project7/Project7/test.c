#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("***********************\n");
	printf("****   1.play     *****\n");
	printf("****   0.exit     *****\n");
	printf("***********************\n");

}
void csh(char arr[3][3], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <col; j++)
		{
			 arr[i][j]= ' ';
		}
	}
}
void dy(char arr[3][3], int row, int col)
{
	for (int i = 0; i< row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (i < row - 1)
				printf("|");
		}
		printf("\n");
	}
}
void game()
{
	char arr[3][3] = { 0 };
	csh(arr, 3, 3);
	dy(arr, 3, 3);

}
int main()
{
	int a = 0;
	do
	{
	menu();
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("Èý×ÓÆåÓÎÏ·");
			game();
			break;
	case 0:
		break;
	default:
		break;
	}
	} while (a);
	return 0;
}