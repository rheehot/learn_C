#include <stdio.h>

main(void)
{
	int x = 50, y=30;
	printf("x가 y보다 크고 y는 40미만입니까? %d\n",(x>y)&&(y<40)); //&&and
	printf("x가y보다 작거나 y가 30입니까? %d\n",(x<y)||(y=30));//||or
	printf("x가 50이 아닙니까? \n", x!=50);
	return 0;
}
