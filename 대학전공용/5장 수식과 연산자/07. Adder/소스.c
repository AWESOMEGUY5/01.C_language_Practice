#include <stdio.h>

int main(void)
{
	printf("<���� ���� ������1>\n");
	int a= 10, b = 10, c = 33, d = 100, e = 25, f = 3, g = 8;

	a += 1; b -= c; a *= a, d /= 25, e %= 5;

	printf("a += 10: %d \nb -= c: %d \na *= a: %d \nd /= 25: %d \ne %%= 5: %d\n\n", a, b, c, d, e);
	
	printf("<���� ���� ������2>\n");
	printf("3 &= 1: %d \n8 |= 2: %d \n2 ^= 8: %d",f &= g, g |= f, f ^= g);
}