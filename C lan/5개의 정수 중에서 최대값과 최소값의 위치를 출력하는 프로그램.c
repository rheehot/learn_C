#include <stdio.h>
#define NUMBER 5

int main(void)
{
	int i, max, min, index;
	int array[NUMBER];
	max = 0;
	index = 0;
	// array[0] ~ array[4] : �� 5���� �� �� �ִ� ũ���� �迭 �� 
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(max < array[i])
		{
			max = array[i];
			index = i;
		}
	} 
	printf("���� ū ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", max, index + 1);
	return 0;
}
