#define _CRT_SECURE_NO_WARNINGS
#define one_minute 60

#include <stdio.h>

int main(void)
{
	int input, minute, second;

	printf("��ȯ�� �ʸ� �Է��Ͻÿ�. : "); scanf("%d", &input);

	minute = input / one_minute; second = input % one_minute;

	printf("%d�ʴ� %d�� %d�� �Դϴ�.", input, minute, second);
}