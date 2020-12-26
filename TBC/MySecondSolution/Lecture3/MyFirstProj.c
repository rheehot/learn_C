#include <limits.h>
#include <stdio.h>

/*
int main() {
	unsigned int u_max = UINT_MAX;
	unsigned int u_min = 0;
	signed int i_max = INT_MAX;
	signed int i_min = INT_MIN;


	printf("max of uint = %u\n", u_max);
	printf("min of uint = %u\n", u_min);

	printf("max of int = %d\n", i_max);
	printf("min of int = %d\n", i_min);

	return 0;
}
*/

int main(void)
{
	int numbers[6] = { 4, 8, 15, 16, 23, 42 };

	for (int i = 0; i < 6; i++)
	{
		if (numbers[i] == 50)
		{
			prinft("Found!\n");
		}
	}
	printf("Not found\n");
}