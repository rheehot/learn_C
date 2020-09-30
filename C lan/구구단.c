#include <stdio.h>

int main(void)
{
	int i, num;
	
	scanf("%d", &num);
	
	for(i=1; i<=9; i++)
	{
		printf("%d x %d = %d\n", num,i, i*num);
	}
	return 0;
}
