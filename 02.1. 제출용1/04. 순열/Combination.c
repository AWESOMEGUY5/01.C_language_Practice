#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int input()
{
	int n;
	printf("������ �Է��Ͻÿ�. : "), scanf("%d", &n);
	return n;
}
int factorial(int n)	//���丮�� ���
{
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}
int calculate(int n, int r) //���� ���
{
	return factorial(n) / (factorial(r) * factorial(n - r));
}
int main(void)
{
	int n = input();
	int r = input();
	printf("C(%d, %d) = %d\n", n, r, calculate(n, r));
}