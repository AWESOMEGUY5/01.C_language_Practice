#include <stdio.h>

int main(void)
{
	int x = 10, *p = &x;
	// x  : 10;
	// *p : 10;
	// p  : x�� �ּ�
	printf("x�� �� : %5d \n*p�� �� : %4d \np�� �� : %5p", x, *p, &p);
}