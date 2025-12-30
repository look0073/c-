#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void maopao(int arr[], int sz)
{
	for (int i = 1; i <sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tep = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tep;
			}

		}
		}
	}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	maopao(arr,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}