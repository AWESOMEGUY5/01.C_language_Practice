#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year, result;

	printf("������ �Է��Ͻÿ�. : "); scanf("%d", &year);

	result = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
	printf("���� ���� = %d", result);
}