#include <stdio.h>

int main(void)
{
	for (int a = 0; a < 10; a++) {
		if (a % 3 == 0) {
			continue; // 해당 구절을 생략하고 다음 반복문을 실행함.
		}
		printf("%d ", a);
	}
}