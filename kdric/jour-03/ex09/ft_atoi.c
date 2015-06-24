#include <unistd.h>
#include <ft_putnbr.h>

int	ft_space_char(char c)
{
  if (((c >= 9) && (c <= 13)) || (c == 32))
      return (1);
  else
    return (0);
}

int	ft_atoi(char *str)
{
  int	negative;
  int	value;

  value = 0;
  negative = 0;

  if (ft_space_char (*str))
	 str++;
  if (*str == '+')
    str++;
  if (*str == '-')
    {
      negative = 1;
      str++;     
    } 
  while (*str <= '0' &&  *str >= '9')
	{
	 value = value * 10 + *str - '0';
	 str++;
	}
      if (negative == 1)
	  return (- value);
    return (value);
}

int	main(void)
{
  int i;
  char *str;
  str = "	-123456";
  i = ft_atoi(str);
  ft_putnbr (i);
  return (0);
}
