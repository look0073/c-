#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm> // 用于排序功能
using namespace std;

const int MAX_SIZE = 10; // 数组最大容量

// 初始化数组：将size设为0，表示已初始化
void initArray(int& size) {
    size = 0;
}

// 赋值操作：设置指定位置的元素值，添加初始化检查
bool setElement(int arr[], int size, int index, int value) {
    if (size == -1) { // 检查数组是否未初始化
        cout << "错误：数组未初始化！" << endl;
        return false;
    }
    if (index < 0 || index >= size) {
        return false;
    }
    arr[index] = value;
    return true;
}

// 取值操作：获取指定位置的元素值，添加初始化检查
bool getElement(int arr[], int size, int index, int& value) {
    if (size == -1) { // 检查数组是否未初始化
        cout << "错误：数组未初始化！" << endl;
        return false;
    }
    if (index < 0 || index >= size) {
        return false;
    }
    value = arr[index];
    return true;
}

// 查找操作：返回第一个匹配元素的索引，未找到返回-1，添加初始化检查
int findElement(int arr[], int size, int target) {
    if (size == -1) { // 检查数组是否未初始化
        cout << "错误：数组未初始化！" << endl;
        return -1;
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// 插入操作：在指定位置插入元素，添加初始化检查
bool insertElement(int arr[], int& size, int pos, int value) {
    if (size == -1) { // 检查数组是否未初始化
        cout << "错误：数组未初始化！" << endl;
        return false;
    }
    if (size >= MAX_SIZE || pos < 0 || pos > size) {
        return false;
    }
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    size++;
    return true;
}

// 删除操作：删除指定位置的元素，添加初始化检查
bool deleteElement(int arr[], int& size, int pos) {
    if (size == -1) { // 检查数组是否未初始化
        cout << "错误：数组未初始化！" << endl;
        return false;
    }
    if (pos < 0 || pos >= size) {
        return false;
    }
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    return true;
}

// 排序操作：对数组进行升序排序，添加初始化检查
void sortArray(int arr[], int size) {
    if (size == -1) { // 检查数组是否未初始化
        cout << "错误：数组未初始化！" << endl;
        return;
    }
    // 使用标准库的排序函数，需包含<algorithm>
    sort(arr, arr + size);
}

// 打印数组元素
void printArray(int arr[], int size) {
    if (size == -1) { // 检查数组是否未初始化
        cout << "错误：数组未初始化！" << endl;
        return;
    }
    cout << "当前数组：";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "当前长度：" << size << endl << endl;
}

int main() {
    int* arr = new int[MAX_SIZE]; // 动态分配数组内存
    int size = -1;                // 初始状态为未初始化（-1）
    initArray(size);              // 初始化数组（size设为0）

    // 插入元素
    insertElement(arr, size, 0, 10); // 插入整数值，原代码中的10.1会被截断为10
    insertElement(arr, size, 1, 20);
    insertElement(arr, size, 2, 30);
    printArray(arr, size); // 输出：10 20 30

    // 赋值操作：修改位置1的值为200
    setElement(arr, size, 1, 200);
    printArray(arr, size); // 输出：10 200 30

    // 取值操作：获取位置2的值
    int val;
    if (getElement(arr, size, 2, val)) {
        cout << "位置2的值为：" << val << endl << endl; // 输出：30
    }

    // 查找元素200的位置
    int index = findElement(arr, size, 200);
    if (index != -1) {
        cout << "元素200在位置：" << index << endl << endl; // 输出：1
    }

    // 在位置1插入新元素50
    if (insertElement(arr, size, 1, 50)) {
        cout << "插入成功！" << endl;
        printArray(arr, size); // 输出：10 50 200 30
    }

    // 删除位置2的元素
    if (deleteElement(arr, size, 2)) {
        cout << "删除成功！" << endl;
        printArray(arr, size); // 输出：10 50 30
    }

    // 新增功能：排序数组
    sortArray(arr, size);
    cout << "排序后的数组：" << endl;
    printArray(arr, size); // 输出：10 30 50

    delete[] arr; // 释放动态分配的内存
    return 0;
}