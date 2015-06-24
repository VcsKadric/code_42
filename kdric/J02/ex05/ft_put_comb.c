#include<unistd.h>

void	ft_putchar(char c)
{
  write (1, &c, 1);
}

int	ft_put_comb(void)
{
  int i;
  int decimal;

  i = 0;
   while (i <= 999)
    {
      decimal = 100;
      while (decimal > 0)
	{
	 ft_putchar (i % (decimal * 10)/ decimal + 48);
	 decimal = decimal / 10;
	}
      i++;
      if (i != 999)
	ft_putchar (',');
    }
   return (0);
}
  

int	main()
{
  ft_put_comb();
  return (0);
}
