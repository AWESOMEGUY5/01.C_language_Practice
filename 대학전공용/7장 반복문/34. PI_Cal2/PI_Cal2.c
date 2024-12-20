#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
double pi_cal(unsigned int repeat)
{
	unsigned int mul = 2;
	double divident = 4.0, divisor, PI = 3.0;
	for (unsigned int i = 1; i <= repeat; i++) {
		divisor = 1.0;
		for (unsigned int j = 1; j <= 3; j++) {
			divisor = divisor * mul;
			if (j == 3) {
				continue;
			} else {
				mul++;
			}
		}
		PI = PI + divident / divisor;
		divident = -divident;
	}
	printf("¹Ýº¹ È½¼ö : %d, PI = %g", repeat, PI);
}

int main(void)
{
	unsigned int repeat;
	printf("¹Ýº¹ È½¼ö : "), scanf("%u", &repeat);
	pi_cal(repeat);
	
}