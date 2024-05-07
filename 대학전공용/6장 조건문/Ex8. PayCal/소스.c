#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned int time, age, n;

	printf("현재 시간과 나이를 입력하시오. : "), n = scanf("%u %u", &time, &age);
	if (n == 2 && time <=24) {
		if (time < 17) {
			if (age > 12 && age < 65)
				printf("요금은 34000원입니다.");
			else
				printf("요금은 25000원입니다.");
		} else {
			printf("요금은 10000원입니다.");
		}
	} else {
		printf("잘못된 형식입니다.");
	}
	return 0;
}