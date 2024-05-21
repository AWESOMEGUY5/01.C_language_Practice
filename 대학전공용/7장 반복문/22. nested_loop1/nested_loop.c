#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			printf("*");
		}
		printf("\n");
	}
}