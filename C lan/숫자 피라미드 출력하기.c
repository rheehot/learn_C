#include <stdio.h>

//�ݺ� �Լ��� �̿��ؼ� ���� �Ƕ�̵带 ����մϴ�.
//For�� While������ ����
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
