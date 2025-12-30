#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int  arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 7,8,9,10,11,12 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//void init(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//		
//	}
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//}
//reverse(int* arr, int sz, int left, int right)
//{
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//		
//	}
//}
//int main()
//{
//	int  arr[] = { 1,2,3,4,5,6 };
//	int sz= sizeof(arr) / sizeof(arr[0]);
//	/*init(arr,sz);
//	print(arr, sz);*/
//	int left = 0;
//	int right = sz - 1;
//	reverse(arr, sz,left,right);
//	print(arr, sz);
//	return 0;
//}

#include <stdio.h>

// 冒泡排序函数
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        // 标记是否发生交换
        int swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            // 如果当前元素大于下一个元素，则交换它们
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // 标记发生了交换
                swapped = 1;
            }
        }
        // 如果没有发生交换，说明数组已经有序，提前退出循环
        if (swapped == 0) {
            break;
        }
    }
}

// 打印数组函数
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("排序前的数组: \n");
    printArray(arr, n);

    // 调用冒泡排序函数
    bubbleSort(arr, n);

    printf("排序后的数组: \n");
    printArray(arr, n);

    return 0;
}