#include <stdio.h>
#include <math.h>

int main(void)
{
	double a = (0.3 * 3) + 0.1, b = 1;
	printf("a == b�� ��� : %d\n", a == b);
	printf("fabs(a - b) < 0.0001�� ��� : %d", fabs(a - b) < 0.0001);

	return 0;
}