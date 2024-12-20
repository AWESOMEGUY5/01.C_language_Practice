#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	float input1, value;
	printf("x의 값을 입력하시오. : "), scanf("%f", &input1);

	if (input1 <= 0) {
		value = pow(input1, 2) - 9 * 9 * input1 + 2;
	} else {
		value = 7 * input1 + 2;
	}
	printf("f(x)의 값은 %g\n", value);
	return 0;
}