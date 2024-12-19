#include <stdio.h>

#define PRODUCT 5

int sum(int sales[][PRODUCT], int years);

int main(void)
{
	int sales[][PRODUCT] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	// sum(sales, sizeof sales / sizeof sales[0]); -> �Լ� ȣ��(sales �迭, �迭�� ��ü ũ��(36)/0��° �迭�� ũ��(12)) -> 3
	int total_sale = sum(sales, sizeof sales / sizeof sales[0]);
	printf("�� ������ %d�Դϴ�.\n", total_sale);

	return 0;
}

int sum(int sales[][PRODUCT], int years)
{
	int total = 0;
	for (int y = 0; y < years; y++) {
		for (int  p = 0; p < PRODUCT; p++) {
			total += sales[y][p];
		}
	}
	return total;
}