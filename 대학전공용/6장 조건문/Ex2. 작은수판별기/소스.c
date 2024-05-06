#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input1, input2, input3 ,output1;

	printf("정수 3개를 입력하시오. : "), scanf("%d %d %d", &input1, &input2, &input3);

	if (input1 > input2) {
		output1 = input2 > input3 ? input3 : input2;
		printf("제일 작은 정수는 %d입니다.", output1);
	}
	else {
		output1 = input1 > input3 ? input3 : input1;
		printf("제일 작은 정수는 %d입니다.", output1);
	}		
}