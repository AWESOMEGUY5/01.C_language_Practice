#include <stdio.h>
void print_stars()
{
	for (int i = 0; i < 30; i++) {
		printf("*");
	}
}

int main(void)
{
	print_stars(); // �Լ� ȣ��
	printf("\nHello world\n");
	print_stars(); // �Լ� ȣ��

	return 0;
}