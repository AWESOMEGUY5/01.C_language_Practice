#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned int time, age, n;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�. : "), n = scanf("%u %u", &time, &age);
	if (n == 2 && time <=24) {
		if (time < 17) {
			if (age > 12 && age < 65)
				printf("����� 34000���Դϴ�.");
			else
				printf("����� 25000���Դϴ�.");
		} else {
			printf("����� 10000���Դϴ�.");
		}
	} else {
		printf("�߸��� �����Դϴ�.");
	}
	return 0;
}