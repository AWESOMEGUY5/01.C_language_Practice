#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <math.h>

int main(void)
{
	float v;
	
	while (1) {
		printf("실수값을 입력하시오. "), scanf("%f", &v);

		if (v < 0) {
			break;
		}
		printf("%g의 제곱근은 %g입니다.\n", v, sqrt(v));
	}
	return 0;
}