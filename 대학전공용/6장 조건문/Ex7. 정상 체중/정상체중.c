#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double height, weight; int n;
	printf("키과 체중을 입력하시오. : "), n = scanf("%lf %lf", &height, &weight);
	
	if (n == 2) {
		double std_weight = (height - 100) * 0.9;
		printf("당신의 정상 체중 범위 : %gkg ~ %gkg\n", std_weight * 0.9, std_weight * 1.2);
		if (std_weight * 0.9 > weight) {
			printf("저체중입니다.");
		} else if (std_weight * 0.9 <= weight || std_weight * 1.2 <= weight) {
			printf("정상 체중입니다.");
		} else if (std_weight * 1.2 < weight) {
			printf("비만입니다.");
		}
	} else {
		printf("형식이 잘못되었습니다.");
		return 1;
	}
	return 0;
}