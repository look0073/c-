#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int erfen_chazhao(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
	{
		return -1;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int k = 17;
	//如果找到返回下标
	//没找到的话返回-1
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = erfen_chazhao(arr, k, sz);
	if (ret == -1)
	{
		printf("不好意思没有找到");
	}
	else
	{
		printf("找到了，下标是：%d",ret );
	}
	return 0;
}
