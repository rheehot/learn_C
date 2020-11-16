
#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	for (i = 0; i <= sizeof(str); i++)
	{
		write(1, &str[i], 1);
	}
}

int main()
{

	char carr[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
	printf("%d\n", sizeof(carr));
	ft_putstr(carr); // &carr[0]
	return 0;
}
