#include <stdio.h>

int main(void)
{
	int i = 10, j = 10;
	int* pi = &i, * pj = &j;
	printf("���� ��\n");
	printf("i = %d, pi = %p\n", i, pi);
	printf("j = %d, pj = %p\n\n", j, pj);
	
	printf("���� ��\n");
	(*pi)++;
	printf("i = %d, pi = %p\n", i, pi);
	*pi++;
	printf("i = %d, pi = %p\n\n", i, pi);

	++*pj;
	printf("j = %d, pj = %p\n", j, pj);
	*++pj;
	printf("j = %d, pj = %p", j, pj);
}