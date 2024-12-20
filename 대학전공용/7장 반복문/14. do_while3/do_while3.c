#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n = 0;
	do {
		printf("%d\n", n);
		n = n + 1;
	} while (n < 3);
}