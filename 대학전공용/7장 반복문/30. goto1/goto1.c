#include <stdio.h>

int main(void)
{
	for (int x = 1; x < 10000; x++) {
		for (int y = 1; y < 10; y++) {
			if (_kbhit())
				goto OUT;
			printf("*");
		}
		printf("\n");
	}
OUT:
	return 0;
}