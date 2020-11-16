#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int count_y;
	int count_x;
	int base_y;
	int base_x;

	count_y = 0;
	count_x = 0;
	base_y = y;
	base_x = x;
	while (y > 0)
	{
		if (count_y == 0 || count_y == base_y)
		{
			while (x >= 0)
			{
				if (count_x == 0 || count_x == base_x)
				{
					ft_putchar('o');
					if (count_x == base_x)
						ft_putchar('\n');
					count_x++;
					x--;
					continue ;
				}
				else
				{
					ft_putchar('-');
					count_x++;
					x--;
					continue ;
				}
				x = base_x;
				count_x = 0;
			}
		}
		y--;
	}
}

int	main(void)
{
	rush(10, 4);
}
