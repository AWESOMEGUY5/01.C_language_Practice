#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned int price, input, charge, Bill_1000, Coin_500, Coin_100;

	printf("���� ���� �Է��Ͻÿ�.(���� : ��) : "); scanf("%d", &price);
	printf("������ �ݾ��� �Է��Ͻÿ�.(���� : ��) : "); scanf("%d", &input);

	charge = input - price;
	//Bill_1000 = charge / 1000, Coin_500 = (charge - a * 1000) / 500, Coin_100 = (charge - (a * 1000 + b * 500)) / 100;

	Bill_1000 = charge / 1000; charge = charge % 1000;
	Coin_500 = charge / 500; charge = charge % 500;
	Coin_100 = charge / 100;

	printf("�Ž������� ������ �����ϴ�.\n");
	printf("õ���� %d ��\n", Bill_1000);
	printf("����� %d ��\n", Coin_500);
	printf("��� %d ��\n", Coin_100);

	return 0;
}