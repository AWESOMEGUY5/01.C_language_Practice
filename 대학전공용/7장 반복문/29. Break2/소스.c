#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <math.h>

int main(void)
{
	float v;
	
	while (1) {
		printf("�Ǽ����� �Է��Ͻÿ�. "), scanf("%f", &v);

		if (v < 0) {
			break;
		}
		printf("%g�� �������� %g�Դϴ�.\n", v, sqrt(v));
	}
	return 0;
}