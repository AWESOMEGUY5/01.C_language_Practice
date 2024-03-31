#include <stdio.h>

int main(void)
{
	int i = 255, j = -2, k = -3;
	printf("10진수 : %d 8진수 : %o 16진수 : %x\n", i, i, i);

	i = -1; 
	printf("-1 : %x / -2 : %x / -3 : %x", i, j, k);

	return 0;
}