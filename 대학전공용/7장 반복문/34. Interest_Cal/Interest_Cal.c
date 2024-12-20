#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>

int input()
{
	int year;
	double money, percent;

	printf("원금(원) : "), scanf("%lf", &money);
	printf("이율(%%) : "), scanf("%lf", &percent);
	printf("기간(년) : "), scanf("%d", &year);

	calculate(money, percent, year);
}

int calculate(double money, double percent, int year)
{
	printf("=========================\n");
	printf("연도\t원리금\n");
	printf("=========================\n");
	percent = percent / 100.0 + 1.0;
	for (int i = 1; i <= year; i++) {
		money = money * percent;
		printf("%2d\t%10.1lf\n", i, money);
	}
}
int main(void)
{
	input();
}