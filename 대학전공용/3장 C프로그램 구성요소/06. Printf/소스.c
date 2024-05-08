#include <stdio.h>
#include <math.h>

int main(void)
{
	//정수형
	int sum = 100;
	printf("%d \n", sum);

	//실수형
	double Float = 3.141592;
	printf("%f \n", Float);

	//문자형
	char text = 'a';
	printf("%c \n", text);

	//필드폭과 정밀도
	printf("%10d\n", 123);
	printf("%-10d\n", 123);

	//중간점검 1 - %f
	//중간점검 2
	int k = 10;
	printf("%d", k);

	return 0;
}