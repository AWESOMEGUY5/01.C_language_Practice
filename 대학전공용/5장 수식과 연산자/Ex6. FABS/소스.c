#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("(1.0-0.9)==0.1�� %d�Դϴ�", fabs(1.0 - 0.9 == 0.1) < 0.00000001);

	return 0;
}