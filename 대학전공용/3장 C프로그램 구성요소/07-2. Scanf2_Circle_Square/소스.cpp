#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>

int main(void)
{
	//원의 넓이 구하기
	float radius = 0, Square = 0;
	printf("원의 넓이를 구합니다. 반지름을 입력하시오. : "); scanf("%f", &radius);
	
	printf("원의 넓이 : %.3f\n", Square = pow(radius, 2) * 3.141592);

	//원의 둘레 구하기
	float Perimeter = 0;
	printf("원의 둘레를 구합니다. 반지름을 입력하시오. : "); scanf("%f", &radius);

	printf("원의 둘레 : %.3f\n", Perimeter = 2 * radius * 3.141592);
}
