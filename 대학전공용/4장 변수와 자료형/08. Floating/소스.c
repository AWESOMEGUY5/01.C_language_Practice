#include <stdio.h>
#include <float.h>

int main(void)
{
	

	printf("float�� ũ�� : %d \t", sizeof(float)); float x= FLT_MIN, X= FLT_MAX; printf("float�� ���� : %g ~ %g\n", x, X);
	printf("double�� ũ�� : %d \t", sizeof(double)); double y = DBL_MIN, Y = DBL_MAX; printf("double�� ���� : %g ~ %g\n", y, Y);


}