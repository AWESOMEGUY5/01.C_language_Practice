#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int input1, computer, n;

	printf("복권번호를 입력하시오.(0 ~ 99까지) : "), n = scanf("%d", &input1);

	srand(time(NULL));
	computer = rand() % 99 + 1;

	if (n == 1 && input1 <= 99) {
		unsigned int digit1, digit2, inputdigit1,inputdigit2;
		digit1 = computer / 10; 
		digit2 = computer % 10;
		inputdigit1 = input1 / 10;
		inputdigit2 = input1 % 10;
		printf("당첨번호는 %d입니다.\n", computer);
		if (digit1 == inputdigit1 && digit2 == inputdigit2) {
			printf("상금 백만원을 받았습니다!\n");
		} else if (digit1 == inputdigit1 || digit2 == inputdigit2) {
			printf("상금 오십만원을 받았습니다!\n");
		} else {
			printf("상금은 없습니다.\n");
		}
		return 0;
	} else {
		printf("잘못된 형식입니다.\n");
		return 1;
	}
}