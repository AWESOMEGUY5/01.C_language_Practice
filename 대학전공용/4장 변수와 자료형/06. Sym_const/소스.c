#include <stdio.h>
#define Tax_Rate 0.15

int main(void)
{
	const float Month = 12; float m_salary, y_before_salary, y_after_salary, Tax;

	printf("월급을 입력하시오. (단위 : 만원) :"), scanf_s("%f", &m_salary);
	y_before_salary = m_salary * Month;

	printf("연봉은 세전 %.0f만원입니다.\n", y_before_salary);

	Tax = y_before_salary * Tax_Rate - 126;
	printf("세금은 %.0f만원입니다.(소득세 공제)\n", Tax);

	y_after_salary = y_before_salary - Tax;
	printf("연봉은 세후 %.0f만원입니다. \n", y_after_salary);

	return 0;
}