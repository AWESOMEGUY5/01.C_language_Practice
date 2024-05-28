#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{	
	int repeat; double PI = 0, divident = 4.0, divisor = 1.0;
	printf("¹Ýº¹ È½¼ö : "), scanf("%d", &repeat);
	
	for (int a = 0; a < repeat; a++) {
		PI = PI + divident / divisor;
		divident = -divident;
		divisor = divisor + 2;
	}
	printf("PI = %f\n", PI);
}