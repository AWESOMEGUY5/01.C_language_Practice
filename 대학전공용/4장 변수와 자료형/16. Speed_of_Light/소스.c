#include <stdio.h>

int main(void)
{
	const double c = 299792.458;
	double distance = 149600000;

	double time_second; int time_minute, remainder;
	time_second = distance / c; 
	time_minute = time_second / 60; remainder = (int)time_second % 60;
	
	printf("빛의 속도는 %.3lfkm/s\n", c);
	printf("태양과의 거리는 %.3lfkm\n", distance);
	printf("도달 시간은 %.3lf초, %d분 %d초\n", time_second, time_minute, remainder);

	return 0;
}