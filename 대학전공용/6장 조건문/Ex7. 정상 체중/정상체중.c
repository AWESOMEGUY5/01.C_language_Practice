#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double height, weight; int n;
	printf("Ű�� ü���� �Է��Ͻÿ�. : "), n = scanf("%lf %lf", &height, &weight);
	
	if (n == 2) {
		double std_weight = (height - 100) * 0.9;
		printf("����� ���� ü�� ���� : %gkg ~ %gkg\n", std_weight * 0.9, std_weight * 1.2);
		if (std_weight * 0.9 > weight) {
			printf("��ü���Դϴ�.");
		} else if (std_weight * 0.9 <= weight || std_weight * 1.2 <= weight) {
			printf("���� ü���Դϴ�.");
		} else if (std_weight * 1.2 < weight) {
			printf("���Դϴ�.");
		}
	} else {
		printf("������ �߸��Ǿ����ϴ�.");
		return 1;
	}
	return 0;
}