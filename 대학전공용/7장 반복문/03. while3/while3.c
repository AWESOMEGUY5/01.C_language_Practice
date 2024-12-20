#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	int n = 1;

	printf("==============================\n");
	printf("n \t\tnÀÇ Á¦°ö\n");
	printf("==============================\n");

	while (n <= 10) {
		printf("%d \t\t%d\n", n, n * n);
		n++;
	}
	return 0;
}