#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int repeatnum = 0, sum = 0, num1 = 0;
	
	while (repeatnum < 5) {
		printf("값을 입력하시오. : "), scanf("%d", &num1);
		sum += num1;
		repeatnum++;
	}
	printf("합계는 %d입니다.", sum);

	return 0;
}