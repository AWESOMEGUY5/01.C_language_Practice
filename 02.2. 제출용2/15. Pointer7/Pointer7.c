#include <stdio.h>

int main(void)
{
	// �迭�� ������ó�� ���
	int a[] = { 10,20,30,40,50 };

	printf("a = %p\n", a);
	printf("a + 1 : %p\n", a + 1);

	printf("*a = %d\n", *a);
	printf("*(a + 1) = %d", *a + 1);

	return 0;
}