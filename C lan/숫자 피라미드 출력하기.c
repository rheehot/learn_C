#include <stdio.h>

//반복 함수를 이용해서 숫자 피라미드를 출력합니다.
//For문 While문으로 구성
int print(int a) 
{
	int i, j;
	for(i = 0; i < a; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%d ", j + 1);
		}
		printf("\n");
	}
}

int main(void)
{
	int a;
	scanf("%d", &a);
	print(a);
	return 0;
}
