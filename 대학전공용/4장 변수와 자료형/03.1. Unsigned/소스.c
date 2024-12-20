#include <stdio.h>
#include <limits.h>

int main(void)
{
	short s_money = SHRT_MAX;
	unsigned short u_money = 0;

	s_money = s_money + 1, printf("s_money = %d\n", s_money);

	printf("u_money = %d\n",u_money);
	u_money = u_money - 1; printf("u_money - 1 = %d\n", u_money);

	return 0;

	
}