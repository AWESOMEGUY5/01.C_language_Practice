#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double KR_Exchange_rate = 0, US_Exchange = 0; int Having_Money = 0;
	
	printf("���� ȯ���� �Է��Ͻÿ�. : "); scanf("%lf", &KR_Exchange_rate);
	printf("��ȭ �ݾ��� �Է��Ͻÿ�. : "); scanf("%d", &Having_Money);
	
	printf("��ȭ %d���� %.2lf�޷��Դϴ�.", Having_Money, US_Exchange = Having_Money / KR_Exchange_rate);

	return 0;
}