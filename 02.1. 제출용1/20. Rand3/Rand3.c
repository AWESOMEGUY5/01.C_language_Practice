#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int integer_rand1()
{
	// rand1, 0���� 9���� 10���� ����
	for (int x = 0; x < 6; x++) {
		printf("%d ",rand() % 10);
	}
	printf("\n");

	// rand2, 1���� 10���� 10���� ����
	for (int x = 0; x < 6; x++) {
		printf("%d ", (rand() + 1) % 10);
	}
	printf("\n");

	// rand3, �ִ񰪰� �ּڰ�
	int min = 10, max = 45;
	for (int x = 0; x < 6; x++) {
		printf("%d ", (rand() + min) % (max - min + 1));
	}
	printf("\n");
}

double float_rand()
{
	// �Ǽ� ǥ�� 1
	for (int x = 0; x < 6; x++) {
		printf("%g ", ((double)rand() / RAND_MAX));
	}
	printf("\n");

	// �Ǽ� ǥ�� 2
	for (int x = 0; x < 6; x++) {
		printf("%g ", rand() / (RAND_MAX + 1.0));
	}
	printf("\n");
}

int main(void)
{
	integer_rand1(), float_rand();

}