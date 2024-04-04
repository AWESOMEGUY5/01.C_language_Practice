#include <stdio.h>

int main(void)// 형변환의 우선순위 : int < unsigned int < long < unsigned long < float < double(가장 높음)
{
	int a = 30; float b = 5; 
	printf("%f\n", a / b); // int가 float형으로 변환

	printf("%lf\n", (double)a / b); // int가 형변환 연산자에 의해 먼저 변환되고 double형으로 변환 후 연산됨

	printf("%lf\n", b / 2); // 피연산자 중 하나가 double형이므로 2는 double형으로 변환

	printf("%lf\n", (double)5 / (double)2); // 위와 동일함

	printf("%d\n",a = 4.9 + 1.3);// 수식의 결과는 6.2이 되나 정수형 변수 a로 변환되면 내림변환이 발생하여 6이 저장된다.

	printf("%d\n", a = (int)4.9 + (int)1.3);// 형변환 연산자가 가장 우선순위가 높기에 형변환이 이루어져 4, 1이 되었고 5가 a에 할당된다.

	return 0;
}