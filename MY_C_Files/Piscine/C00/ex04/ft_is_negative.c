#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_is_negative(int n)
{
  int po;
  int ne;

  po = 'P';
  ne = 'N';
  if (n >= 0)
    ft_putchar(po);
  else
    ft_putchar(ne);
}

int main(void)
{
  ft_is_negative(-5);
  return 0;
}
