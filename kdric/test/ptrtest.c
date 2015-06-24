#include<unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
  write (1, &c,1);
}

void	ft_ft(char *ptr)
{
  *ptr = 'z';
}
void	ft_xputchar(char d, int i)
{
  int n;
  int *inc;
  n = 0;
  inc = malloc(i * sizeof(int));
  while (n < i)
    {
      inc[0] = n + 1;
      ft_putchar ((d + inc[0]));
      ft_putchar ('\n');
      n += 1;
    }
}
int	main(void)
{
  char a;
  char *ptr;
  a = 'a';
  ptr = &a;
  ft_putchar (a);
  ft_putchar ('\n');
  *ptr = 'b';
  ft_putchar (a);	/* ft_putchar (*ptr) donne le meme resultat*/
  ft_putchar ('\n');
  ft_xputchar (a, 3);
  ft_ft (ptr);
  ft_putchar (a);
  ft_putchar ('\n');
  return (0);
 }
