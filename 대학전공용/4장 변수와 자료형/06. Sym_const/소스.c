#include <stdio.h>
#define Tax_Rate 0.15

int main(void)
{
	const float Month = 12; float m_salary, y_before_salary, y_after_salary, Tax;

	printf("������ �Է��Ͻÿ�. (���� : ����) :"), scanf_s("%f", &m_salary);
	y_before_salary = m_salary * Month;

	printf("������ ���� %.0f�����Դϴ�.\n", y_before_salary);

	Tax = y_before_salary * Tax_Rate - 126;
	printf("������ %.0f�����Դϴ�.(�ҵ漼 ����)\n", Tax);

	y_after_salary = y_before_salary - Tax;
	printf("������ ���� %.0f�����Դϴ�. \n", y_after_salary);

	return 0;
}