#include <stdio.h>

int main(void)
{
	char code = 'a';

	printf("%d %d %d\n", code, code + 1, code + 2);
	printf("%c %c %c\n", code, code + 1, code + 2);

	return 0;
}