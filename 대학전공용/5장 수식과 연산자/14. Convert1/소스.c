#include <stdio.h>

int main(void)
{
	char c = 10000; int i = 1.2345 + 10; // 내림 변환은 데이터의 손상이 발생한다.
	float f = 10 + 20; // 올림 변환은 영향이 없다.
	printf("c = %d, i = %d, f =%f", c, i, f);

	return 0;
}