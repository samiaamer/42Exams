#include <unistd.h>

void  print_hex (int num)
{
  char  *hex = "0123456789abcdef";

  if (num >= 16)
    print_hex (num / 16);
  write (1, &hex[num % 16], 1);
}

int  main (int argc, char **argv)
{
  int  num = 0;
  if (argc == 2)
  {
    int  i = 0;
    while (argv[1][i])
      {
        if (argv[1][i] >= '0' && argv[1][i] <= '9')
          num = num * 10 + (argv[1][i] - '0');
        else
        {
          write (1, "\n", 1);
          return (0);
        }
        i++;
      }
    print_hex (num);
  }
  write (1, "\n", 1);
  return (0);
}
