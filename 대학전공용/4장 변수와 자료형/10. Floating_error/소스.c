#include <stdio.h>

int main(void)
{
	double x = 1.0e20 + 5 - 1.0e20;
	printf("%f \n", x);

	return 0;
}