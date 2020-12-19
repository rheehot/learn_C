#include <stdio.h>


void say_hello(void)
{
	printf("Hello, World!");
}
int main()
{
	int x, y, z;

	x = 1;
	y = 20;
	z = 3;

	z = x + y;

	say_hello();

	return 0;
}