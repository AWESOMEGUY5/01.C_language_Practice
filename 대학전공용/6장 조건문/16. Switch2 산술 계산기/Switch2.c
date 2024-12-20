#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input1, input2, result; char oper;

	printf("수식을 입력하시오.(예. 2 + 5): "), scanf("%d %c %d", &input1, &oper, &input2);

	switch (oper) {
	case '+' : {
		result = input1 + input2;
		break;
	}
	case '-': {
		result = input1 - input2;
		break;
	}
	case '*': {
		result = input1 * input2;
		break;
	}
	case '/': {
		result = input1 / input2;
		break;
	}	
	case '%': {
		result = input1 % input2;
		break;
	}
	default:
		printf("%c 연산자는 지원하지 않습니다", oper);
		break;
	}
	printf("%d %c %d = %d", input1, oper, input2, result);
	return 0;
}