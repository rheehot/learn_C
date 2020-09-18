#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	char fruit_name[40]; // stores only on character.

	printf("What is your favorate fruit?\n");

	scanf("%s", fruit_name); // be careful with &

	printf("You like %s!\n", fruit_name);

	return 0;
}