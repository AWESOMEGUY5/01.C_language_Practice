#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double F_temp, C_temp;

	printf("º¯È¯ÇÒ ¼·¾¾¸¦ ÀÔ·ÂÇÏ½Ã¿À. : "); scanf("%lf", &F_temp);
	printf("È­¾¾ : %gF -> ¼·¾¾ : %gC", F_temp, C_temp = 5.0 / 9.0 * (F_temp - 32));
}
