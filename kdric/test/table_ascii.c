#include<unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
  write (1, &c,1);
}

void	ft_putnbr(int nb)
{
  if ((nb <= 2147483647) && (nb >= - 2147483647))
    {
      if (nb < 0)
	{
	  ft_putchar ('-');
	  nb *= -1;
	}
      if (nb >= 10)
	{
	ft_putnbr (nb / 10);
	}
      ft_putchar ((nb % 10) + 48);
    }
}
void	ft_Alpha_putchar(int d, int i)
{
  int n;
  int *inc;
  int ptr;
  ptr = i;
    if (i < 0)
      i = -i;
  inc = (int*)malloc(i * sizeof(int));
  n = 0;
      while (!(n == i))
	    {
	      if (ptr >= 0)
		{
      *inc = n;
      ft_putnbr (d + inc[0]);
      ft_putchar ('-');
      ft_putchar (d + inc[0]);
      ft_putchar ('\n');
       n += 1;
		}
      if (ptr < 0)
	{
	  *inc = n;
	  ft_putnbr (d - inc[0]);
	  ft_putchar ('-');
	  ft_putchar(d -  inc[0]);
	  ft_putchar ('\n');
	  n += 1;
	}
	    }
	 free (inc);
}
int	main(void)
{
  ft_Alpha_putchar ('a', 26);
     return (0);
}
