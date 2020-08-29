#include <stdio.h>

main(void)
{
	int x = -50, y=30;
	int absoluteX = (x>0)?x : -x;
	int max =(x>y) ? x : y;
	int min =(x<y) ? x : y;
	printf("x의 절대값은 %d입니다.\n", absoluteX);
	printf("x와 y중 최대값은 %d입니다. \n", max);
	printf("x와 y중 최소값은 %d입니다. \n", min);
	return 0;
}
