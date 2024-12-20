#include <stdio.h>

int main(void)
{
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}

	printf("1부터 10까지의 합 : %d\n", sum);
	return 0;
}