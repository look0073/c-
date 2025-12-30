#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	/*for (i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
		
	}*/
	for (int j = 0; j < 4; j++)
	{
		printf(" %d", arr[j][1]);
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf(" %d " , arr[i][j]);
		}
		printf("\n");
	}
	printf("%d", arr[1][2]);
	return 0;
}