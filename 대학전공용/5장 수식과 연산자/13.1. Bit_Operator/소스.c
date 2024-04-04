#include <stdio.h>

int main(void)
{
	int a = 32;
	a = ~a;
	a = a + 0x01;
	printf("a = %d\n", a);

	return 0;
}