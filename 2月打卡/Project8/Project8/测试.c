#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	char a;
	a = ((char)time(NULL));
	printf("%c\n", a);
	printf("%d", a);
	return 0;
}