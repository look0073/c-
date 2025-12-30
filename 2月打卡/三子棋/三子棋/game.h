#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void menu();//打印菜单
void Initialize(char arr[ROW][COL], int row, int col);  //初始化棋盘
void Print(char arr[ROW][COL], int row, int col); //打印棋盘
void Players(char arr[ROW][COL], int row, int col,int *b);//玩家下棋
void Computer(char arr[ROW][COL], int row, int col); //电脑下棋
char Inwin(char arr[ROW][COL], int row, int col);
char panduan(char arr[ROW][COL], int row, int col);