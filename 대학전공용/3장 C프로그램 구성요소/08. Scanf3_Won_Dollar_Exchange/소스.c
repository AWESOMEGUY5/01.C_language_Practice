#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double KR_Exchange_rate = 0, US_Exchange = 0; int Having_Money = 0;
	
	printf("현재 환율을 입력하시오. : "); scanf("%lf", &KR_Exchange_rate);
	printf("원화 금액을 입력하시오. : "); scanf("%d", &Having_Money);
	
	printf("원화 %d원은 %.2lf달러입니다.", Having_Money, US_Exchange = Having_Money / KR_Exchange_rate);

	return 0;
}