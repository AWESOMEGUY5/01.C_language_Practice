#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned long long input1, total, tax_rate, output1, output2;
	//input1 : ���� ǥ��, tax_rate : �ҵ漼��, output1 : �������ҵ漼, output2 : ���⼼��
	printf("���� ǥ��\t: "), scanf("%llu", &input1);

	if (input1 < 12000000) {
		tax_rate = 6;
		output1 = input1 * tax_rate / 100;
		output2 = 0;
	} else if (input1 < 46000000) {
		tax_rate = 15;
		output1 = input1 * tax_rate / 100;
		output2 = 1080000;
	} else if (input1 < 88000000) {
		tax_rate = 24;
		output1 = input1 * tax_rate / 100;
		output2 = 5220000;
	} else if (input1 < 150000000) {
		tax_rate = 35;
		output1 = input1 * tax_rate / 100;
		output2 = 14900000;
	} else if (input1 < 300000000) {
		tax_rate = 38;
		output1 = input1 * tax_rate / 100;
		output2 = 19400000;
	} else if (input1 < 500000000) {
		tax_rate = 40;		
		output1 = input1 * tax_rate / 100;
		output2 = 25400000;
	} else if (input1 < 1000000000) {
		tax_rate = 42;
		output1 = input1 * tax_rate / 100;
		output2 = 35400000;
	} else {
		tax_rate = 45;
		output1 = input1 * tax_rate / 100;
		output2 = 65400000;
	}
	total = input1 - output2;
	printf("�ҵ漼��\t: %llu%% \n������ �ҵ漼\t: %llu\n", tax_rate, output1);
	printf("����������\t: %llu \n���⼼��\t: %llu\n", output2, output1 - output2);
	printf("����\t\t: %llu", total);
}