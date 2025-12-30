#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL; 
//	int* pd = NULL;
//	double* pq = NULL;
//	printf("%u\n", sizeof(*pc));
//	printf("%u\n", sizeof(*ps));
//
//	printf("%u\n", sizeof(*pd));
//
//	printf("%u\n", sizeof(*pq));
//	return 0;
//
//
//}

//int main()
//{
//	int a = 0x11223344;
//	int b = *a;
//	int* pa = &a;
//	printf("%d", b);
//	*pa = 1;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* parr[10] = { &arr[0],&arr[1],&arr[2]};
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(parr[i]));
//	}
//	return 0;
//}


int main()
{
	int arr1[4] = { 1,8,6,4 };
	int arr2[4] = {2,3,9,5 };
	int arr3[4] = { 3,6,5,6};
	int* parr[3] = { arr1,arr2,arr3 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j<4; j++)
		{
			printf("%d ", *(parr[i]+j));
		}
		printf("\n");
	}
	return 0;
}