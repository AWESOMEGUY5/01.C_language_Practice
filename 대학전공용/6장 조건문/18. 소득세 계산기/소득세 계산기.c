#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned long long input1, total, tax_rate, output1, output2;
	//input1 : 과세 표준, tax_rate : 소득세율, output1 : 공제전소득세, output2 : 산출세액
	printf("과세 표준\t: "), scanf("%llu", &input1);

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
	printf("소득세율\t: %llu%% \n공제전 소득세\t: %llu\n", tax_rate, output1);
	printf("누진공제액\t: %llu \n산출세액\t: %llu\n", output2, output1 - output2);
	printf("세후\t\t: %llu", total);
}