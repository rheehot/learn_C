#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n < 10 && n > -10)
	{
		ft_putchar('0' + n);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putchar('0' + (n % 10));
	}
}

int main(void)
{
	ft_putnbr(-5554122);
	return 0;
}
