#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 0;
	printf("16���� ���� �Է��Ͻÿ�. : "); scanf("%x", &number);

	printf("8�����δ� %04o�Դϴ�. \n",number);
	printf("10�����δ� %d�Դϴ�. \n", number);
	printf("16�����δ� %#x�Դϴ�. \n", number);

	return 0;
}
