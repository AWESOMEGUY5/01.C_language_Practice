#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float Fahrenheit, Celsius;
	printf("ȭ������ �Է��Ͻÿ�. : "), scanf("%f", &Fahrenheit);
	
	Celsius = 5.0 / 9.0 * (Fahrenheit - 32);
	printf("�������� %.2f �Դϴ�.", Celsius);

	return 0;
}