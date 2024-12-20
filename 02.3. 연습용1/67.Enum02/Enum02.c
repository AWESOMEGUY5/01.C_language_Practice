#include <stdio.h>

enum days { SUN = 1, MON, TUE, WED, THU, FRI, SAT };
char* days_name[] = {
	"", "sunday", "monday", "tuesday", "wedenday", "thursday", "friday", "saturday"
};

int main(void)
{
	enum days d = MON;
	printf("%d일은 %s 입니다.", d, days_name[d]);
}