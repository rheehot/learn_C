//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float won = 0, dollar = 0;

	printf("Input Won\n");
	scanf("%f", &won);

	dollar = won * 0.00089f;

	printf("Dollar = %f\n", dollar);

	return 0;
}