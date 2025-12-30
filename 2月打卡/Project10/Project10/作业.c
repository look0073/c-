#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
//字符串逆序（递归实现）
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str=*(str+len-1);
//	*(str + len - 1) = '\0';
//	if(strlen(str+1) > 1)
//	reverse(str + 1);
//	*(str + len - 1) = tmp;
//	
//}
//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left< right)
//		reverse(arr, left + 1, right - 1);
//}
//int main()
//{
//	char arr[] = "abcdefghijklmnopq";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	reverse(arr,left,right);
//	printf("%s", arr);
//	return 0;
//}

//void px(char arr[])
//{
//	char tmp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (strlen(arr + 1) > 1)
//		px(arr + 1);
//	arr[len - 1] = tmp;
//	
//}
//int main()
//{
//	char arr[] = "abcdef";
//	/*int sz = sizeof(arr) / sizeof(arr[0])-2;*/
//	/*printf("%d\n", sz);*/
//	px(arr);
//	printf("%s", arr);
//}

//实现n的k次方
int nk(int n, int k)
{
	/*if (k == 0)
		return 1;*/
	if(k>=1)
		return n * nk(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int sum=nk(n, k);
	printf("%d\n", sum);
	return 0;
}
