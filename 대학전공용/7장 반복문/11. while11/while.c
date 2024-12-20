#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned long long paperthick; short repeatNum = 0, n;
	printf("종이의 두께(mm) : "), n = scanf("%llu", &paperthick);
	if (n == 1) {
		while (repeatNum < 50) {
			paperthick += paperthick;
			repeatNum++;
		}
		printf("종이의 두께 : \t%llumm \n\t\t\t %llukm", paperthick, paperthick/1000000);
	}
}