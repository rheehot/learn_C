#include <unistd.h>

//int main(void)
//{	
//	char a;
//	
//	a= 'a';
//	ft_putchar(a);
//	return 0;
//}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	i;
	
	i = 'a';
	while(i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}
