#include <stdio.h>

int main(void)
{
	int i = 255, j = -2, k = -3;
	printf("10���� : %d 8���� : %o 16���� : %x\n", i, i, i);

	i = -1; 
	printf("-1 : %x / -2 : %x / -3 : %x", i, j, k);

	return 0;
}