#include <stdio.h>

main(void)
{
	int x = -50, y=30;
	int absoluteX = (x>0)?x : -x;
	int max =(x>y) ? x : y;
	int min =(x<y) ? x : y;
	printf("x�� ���밪�� %d�Դϴ�.\n", absoluteX);
	printf("x�� y�� �ִ밪�� %d�Դϴ�. \n", max);
	printf("x�� y�� �ּҰ��� %d�Դϴ�. \n", min);
	return 0;
}
