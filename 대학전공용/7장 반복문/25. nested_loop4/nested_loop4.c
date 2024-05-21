#include <stdio.h>
#include <math.h>

int main(void)
{
	for (int i = 1; i <= 100; i++) {
		for (int j = i; j <= 100; j++) {
			for (int k = j + 1; k <= 100; k++) {
				if (pow(i, 2) + pow(j, 2) == pow(k, 2)) {
					printf("%d %d %d\n", i, j, k);
				}
			}
		}
	}
	return 0;
}