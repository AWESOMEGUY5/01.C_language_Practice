#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float Mile = 0, Meter = 0, kilometer = 0;
	printf("��ȯ�� ������ �Է��Ͻÿ�. : "); scanf("%f", &Mile);
	Meter = Mile * 1609.344; kilometer = Meter / 1000;
	
	printf("%.0f ������ %.3f m, %.3f km �Դϴ�.", Mile, Meter, kilometer);
	return 0;
}