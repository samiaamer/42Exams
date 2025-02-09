#include <unistd.h>

int    ft_atoi(char *str)
{
  int res = 0;
  int sign = 1;
  while (*str == ' ' || *str == '\t')
    str++;
  if (*str == '-' || *str == '+')
  {
    if (*str == '-')
    {
      sign = -1;
    }
    str++;
  }
  while (*str >= '0' && *str <= '9')
    {
      res = res * 10 + *str - '0';
      str++;
    }
  return (sign * res);
}

void  ft_putchar(char c)
{
  write (1, &c, 1);
}

void  ft_putnbr(int nbr)
{
  if (nbr > 9)
    ft_putnbr(nbr / 10);
  ft_putchar (nbr % 10 + '0');
}

int  main(int argc, char **argv)
{
  if (argc == 2)
  {
    int i = 0;
    int nbr = ft_atoi(argv[1]);
    while (i <= 9)
      {
        ft_putnbr(i);
        write(1, " x ", 3);
        ft_putnbr(nbr);
        write(1, " = ", 3);
        ft_putnbr (i * nbr);
        write (1, "\n", 1);
        i++;
      }
  }
  write (1, "\n", 1);
  return (0);
}
