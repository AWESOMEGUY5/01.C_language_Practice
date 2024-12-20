#include <stdio.h>

enum days { SUN, MON, TUE, WED, THU, FRI, SAT };
char* days_name[] = {
	"sunday", "monday", "tuesday", "wedenday", "thursday", "friday", "saturday"
};

int main(void)
{
	enum day d = WED;
	printf("%d번째 요일은 %s입니다.", d, days_name[d]);

	return 0;
}