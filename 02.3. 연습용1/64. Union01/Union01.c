#include <stdio.h>

union example
{
	char c;
	int i;
};

int main(void)
{
	union example v;

	printf("공용체의 크기 : %u\n", (unsigned)sizeof(v));
	v.c = 'A';
	printf("v.c : %c	v.i : %d\n", v.c, v.i);


	v.i = 10000;
	printf("v.c : %c	v.i : %d\n", v.c, v.i);

	return 0;
}