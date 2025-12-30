#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

// 冒泡排序
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 快速排序分区函数
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

// 快速排序递归函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// 顺序查找
int sequentialSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

// 二分查找
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

// 打印数组
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = { 5, 3, 8, 4, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    printf("Original array: ");
    printArray(arr, n);

    // 使用动态内存分配修复变长数组问题
    int* bubbleArr = (int*)malloc(n * sizeof(int));  // 动态分配内存
    for (int i = 0; i < n; i++) bubbleArr[i] = arr[i];
    bubbleSort(bubbleArr, n);
    printf("After Bubble Sort: ");
    printArray(bubbleArr, n);
    free(bubbleArr);  // 释放内存

    // 同理修复快速排序的数组
    int* quickArr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) quickArr[i] = arr[i];
    quickSort(quickArr, 0, n - 1);
    printf("After Quick Sort: ");
    printArray(quickArr, n);
    free(quickArr);

    // 顺序查找和二分查找
    int seqIndex = sequentialSearch(arr, n, target);
    printf("Sequential Search for %d: Index %d\n", target, seqIndex);

    int binIndex = binarySearch(quickArr, n, target);
    printf("Binary Search for %d: Index %d\n", target, binIndex);

    return 0;
}