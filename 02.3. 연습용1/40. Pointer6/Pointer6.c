#include <stdio.h>
void sum_mul(int x, int y, int* psum, int* pmul)
{
	*psum = x + y;
	*pmul = x * y;
}
int main(void)
{
	int sum, mul;

	sum_mul(10, 20, &sum, &mul);
	printf("�� : %d, �� : %d\n", sum, mul);

	return 0;
}