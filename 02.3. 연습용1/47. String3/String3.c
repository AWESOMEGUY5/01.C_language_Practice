#include <stdio.h>

int main(void)
{
	char name[100], address[100];

	printf("�̸��� �Է��Ͻÿ�. "), gets(name);
	printf("�ּҸ� �Է��Ͻÿ�. "), gets(address);
	puts(name), puts(address);

	return 0;
}