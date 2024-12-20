#include <stdio.h>
#include <float.h>

int main(void)
{
	

	printf("float의 크기 : %d \t", sizeof(float)); float x= FLT_MIN, X= FLT_MAX; printf("float의 범위 : %g ~ %g\n", x, X);
	printf("double의 크기 : %d \t", sizeof(double)); double y = DBL_MIN, Y = DBL_MAX; printf("double의 범위 : %g ~ %g\n", y, Y);


}