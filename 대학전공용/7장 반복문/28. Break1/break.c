#include <stdio.h>

int main(void)
{
	unsigned int year = 0, Seed_Money = 1000000;
	const unsigned int money = 10000000;

	while (1) {
		year++;
		Seed_Money = Seed_Money * (1 + 0.3);
		if (Seed_Money > money) {
			break;
		}
	}
	printf("%d³â", year);
	return 0;
}