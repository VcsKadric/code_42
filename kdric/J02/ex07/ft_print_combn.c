#include<unistd.h>

void	ft_putchar(char c)
{
  write (1, &c, 1);
}

int ft_10EXP_n(int n)
{
  int NbComb;

  NbComb = 1;
  while (n > 0)
    {
      NbComb = NbComb * 10;
      n--;
    }
  return (NbComb); 
}

int	ft_put_valid_comb(int nb, int n)
{
  int i;
  int j;
  int decimal;
  int dixieme;

  i = n;
  j = n - 1;
  decimal = ft_10EXP_n (n - 1);
  dixieme = 10;
  while (i > 0)
    {
      while (j > 0)
	{
	  if ((nb % dixieme) /(dixieme / 10) <= (nb % (dixieme * 10) /dixieme))
						    {
						      return (0);
						    }
	  dixieme = dixieme * 10;
	  j = j - 1;
	}
      ft_putchar (nb % (decimal * 10) / decimal + 48);
      decimal = decimal / 10;
      i = i - 1;
    }
  ft_putchar (',');
  ft_putchar (' ');
  return (0);
}

void	ft_print_combn(int n)
{
  int i;
  int i_max;

  i = 0;
  i_max = ft_10EXP_n (n);

  while (i <= i_max)
    {
      ft_put_valid_comb (i, n);
      i ++;
    }
}

int	main()
{
  ft_print_combn (3);
  return (0);
}
