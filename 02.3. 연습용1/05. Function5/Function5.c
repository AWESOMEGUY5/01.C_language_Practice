#include <stdio.h>

unsigned is_prime(unsigned n);

int main(void)
{
	unsigned n;

	printf("������ �Է��Ͻÿ�. : "), scanf_s("%u", &n);
	
	if (is_prime(n)) {
		printf("%u�� �Ҽ��Դϴ�. \n", n);
	} else {
		printf("%u�� �Ҽ��� �ƴմϴ�. \n", n);
	}
	return 0;
}

unsigned is_prime(unsigned n)
{
	int i, n2;

	if (n < 2) return 0;
	for (n2 = n / 2, i = 2; i <= n2; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
