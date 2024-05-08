#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double Width = 0, Height = 0, Area = 0, Perimeter = 0;

	printf("직사각형의 가로와 세로의 길이를 입력하시오.(단위 : cm) : "); scanf("%lf %lf", &Width, &Height);
	Perimeter = 2 * (Width + Height); Area = Width * Height;
	printf("직사각형의 둘레 : %.2lf \n", Perimeter);
	printf("직사각형의 넓이 : %.2lf \n", Area);
}
