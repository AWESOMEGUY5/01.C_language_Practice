#include <stdio.h>

int main()
{
	int a[] = { 10,20,30,40,50 };
	int* p = a;

	printf("a[0] = %d, a[1] = %d, a[2] = %d \n", a[0], a[1], a[2]);
	printf("p[0] = %d, p[1] = %d, p[2] = %d \n\n", a[0], a[1], a[2]);

	p[0] = 60, p[1] = 70, p[2] = 80;
	printf("a[0] = %d, a[1] = %d, a[2] = %d \n", a[0], a[1], a[2]);
	printf("p[0] = %d, p[1] = %d, p[2] = %d \n\n", a[0], a[1], a[2]);
}