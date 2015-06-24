#include<unistd.h>

void	ft_char_swap(char *a, char *b)
{
  char c;

  c = *a;
  *a = *b;
  *b = c;
}

char	*ft_strrev(char *str)
{
  int debut;
  int i;
  int fin;
  
  i = 0;
  while (str[i] != '\0')
    {
      i ++;
    }
  fin = i - 1;
  debut = 0;
  while (debut < fin)
    {
      ft_char_swap (&str[debut], &str[fin]);
	       debut ++;
	       fin --;
    }
	return (str);
}


