#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned int price, input, charge, Bill_1000, Coin_500, Coin_100;

	printf("물건 값을 입력하시오.(단위 : 원) : "); scanf("%d", &price);
	printf("투입한 금액을 입력하시오.(단위 : 원) : "); scanf("%d", &input);

	charge = input - price;
	//Bill_1000 = charge / 1000, Coin_500 = (charge - a * 1000) / 500, Coin_100 = (charge - (a * 1000 + b * 500)) / 100;

	Bill_1000 = charge / 1000; charge = charge % 1000;
	Coin_500 = charge / 500; charge = charge % 500;
	Coin_100 = charge / 100;

	printf("거스름돈은 다음과 같습니다.\n");
	printf("천원권 %d 장\n", Bill_1000);
	printf("오백원 %d 개\n", Coin_500);
	printf("백원 %d 개\n", Coin_100);

	return 0;
}