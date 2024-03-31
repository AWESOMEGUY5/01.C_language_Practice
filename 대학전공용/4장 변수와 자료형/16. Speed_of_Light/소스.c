#include <stdio.h>

int main(void)
{
	const double c = 299792.458;
	double distance = 149600000;

	double time_second; int time_minute, remainder;
	time_second = distance / c; 
	time_minute = time_second / 60; remainder = (int)time_second % 60;
	
	printf("���� �ӵ��� %.3lfkm/s\n", c);
	printf("�¾���� �Ÿ��� %.3lfkm\n", distance);
	printf("���� �ð��� %.3lf��, %d�� %d��\n", time_second, time_minute, remainder);

	return 0;
}