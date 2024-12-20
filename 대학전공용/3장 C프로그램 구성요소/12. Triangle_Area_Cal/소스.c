#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float Base_line = 0, Height = 0, Area = 0;
	printf("»ï°¢ÇüÀÇ ¹Øº¯ : "); scanf("%f", &Base_line);
	printf("»ï°¢ÇüÀÇ ³ôÀÌ : "); scanf("%f", &Height);
	
	Area = Base_line * Height / 2;	
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ : %.2f", Area);
	
	return 0;
}