#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int repeatnum = 0, sum = 0, num1 = 0;
	
	while (repeatnum < 5) {
		printf("���� �Է��Ͻÿ�. : "), scanf("%d", &num1);
		sum += num1;
		repeatnum++;
	}
	printf("�հ�� %d�Դϴ�.", sum);

	return 0;
}