#include <stdio.h>

main(void)
{
	int x = 50, y=30;
	printf("x�� y���� ũ�� y�� 40�̸��Դϱ�? %d\n",(x>y)&&(y<40)); //&&and
	printf("x��y���� �۰ų� y�� 30�Դϱ�? %d\n",(x<y)||(y=30));//||or
	printf("x�� 50�� �ƴմϱ�? \n", x!=50);
	return 0;
}
