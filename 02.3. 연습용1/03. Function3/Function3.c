#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int x)
{
	int result = 1;
	for (int i = 1; i <= x; i++) {
		result *= i;
	}
	return result;
}

int main(void)
{
	int x;

	printf("���� ���丮���� ���� ���Ͻÿ�."), scanf("%d", &x);
	printf("%d! = %d", x, factorial(x));

}