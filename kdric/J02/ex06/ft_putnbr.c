#include <unistd.h>

void	ft_putchar(char c)
{
  write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
  if ((nb <= 2147483647) && (nb >= -2147483647))
    {
  if (nb < 0)
    {
    ft_putchar ('-');
    nb = nb * -1;
    }
  if (nb >= 10)
    {
      ft_putnbr (nb / 10);
    }
      ft_putchar((nb % 10) + '0');
    }
}
int main(void)
{
  int a;
  int b;
  a = 5;
  b = a;
  ft_putnbr (a);
  ft_putchar ('\n');
  ft_putnbr (b);
  ft_putchar ('\n');
  a = 6;
  ft_putnbr (a);
  ft_putchar ('\n');
  ft_putnbr (b);
  return (0);
}
