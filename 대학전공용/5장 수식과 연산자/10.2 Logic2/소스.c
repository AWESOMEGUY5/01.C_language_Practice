#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{	
	int year, result;
	printf("������ �Է��Ͻÿ�. : "); scanf("%d", &year);
	result = year % 2;
	printf("%d", !result);
}