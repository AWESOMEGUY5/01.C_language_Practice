#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 6; i++) {
		for (int j = i; j <= 6; j++) {
			if (i + j == 6) {
				printf("%d %d\n", i, j);
			}
		}
	}
}