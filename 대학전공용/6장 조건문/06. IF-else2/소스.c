#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input1, input2;

	printf("분자와 분모를 입력하시오. : "), scanf("%d %d", &input1, &input2);
	
	if (input2 != 0) {
		printf("결과는 %d입니다.", input1 / input2);
		return 0;
	} else {
		printf("0으로 나눌 수 없습니다.");
		return 1;
	}
}