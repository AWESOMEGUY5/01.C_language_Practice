#include <stdio.h>

int main(void)
{
	int x = 1, y;

	printf("수식 x + 1의 값은 %d\n", x);
	printf("수식 y = x + 1의 값은 %d\n", y = x);
	printf("수식 y = 10 + (x = 2 + 7)의 값은");
	
	return 0;
}