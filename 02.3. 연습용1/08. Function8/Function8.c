#include <stdio.h>

int main(void)
{
	int is_prime(int n);

	unsigned n;
	printf("������ �Է��Ͻÿ�. : "), scanf_s("%u", &n);

	if (is_prime(n))
		printf("%d�� �Ҽ��Դϴ�. \n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�. \n", n);

	return 0;
}

int is_prime(unsigned n)
{
	if (n < 2) return 0;

	for (int i =2, n2 = n / 2; i < n2; i++) {
		if (n % i == 0) return 0;
		else return 1;
	}
}