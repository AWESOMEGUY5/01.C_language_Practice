#include <stdio.h>

int main(void)
{
	printf("���� \"��Ģ\" ���� ������1\n");
	int a= 10, b = 10, c = 33, d = 100, e = 25;

	a += 1; b -= c; a *= a, d /= 25, e %= 5;

	printf("a += %d \nb -= %d \nc *= %d \nd /= %d \ne= %d", a, b, c, d, e);
	
	printf("���� ");
}