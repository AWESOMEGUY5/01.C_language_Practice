#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{	
	int height, feet; double inch;
	printf("Ű�� �Է��Ͻÿ�(cm) : "); scanf("%d", &height);
	feet = height / (12 * 2.54);
	inch = (height - feet * 2.54 * 12) / 2.54;
	printf("%dcm�� %d��Ʈ %.2lf��ġ�Դϴ�.", height, feet, inch);

	return 0;
}