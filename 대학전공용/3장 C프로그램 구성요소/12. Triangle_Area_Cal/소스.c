#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float Base_line = 0, Height = 0, Area = 0;
	printf("�ﰢ���� �غ� : "); scanf("%f", &Base_line);
	printf("�ﰢ���� ���� : "); scanf("%f", &Height);
	
	Area = Base_line * Height / 2;	
	printf("�ﰢ���� ���� : %.2f", Area);
	
	return 0;
}