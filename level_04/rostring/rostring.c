#include <unistd.h>

void  write_word(char *start, char *end)
{
  while (start < end)
    {
      write(1, start, 1);
      start++;
    }
}

int  main(int argc, char **argv)
{
  if (argv > 1)
  {
    char *str;
    char *s_w;
    char *e_w;
    str = argv[1];
    while (*str == ' ' || *str == '\t')
      str++;
    s_w = str;
    while (*str != ' ' || *str != '\t')
      str++;
    e_w = str;
    while (*str == ' ' || *str == '\t')
      str++;
    if (*str)
    {
      while (*str)
        {
          if (*str == ' ' || *str == '\t')
          {
            while (*str == ' ' || *str == '\t')
              str++;
            if (*str)
              write (1, " ", 1);
          }
          else 
          {
            write (1, str, 1);
            str++;
          }
        }
      write_word(s_w, e_w);
    }
  }
  write (1, "\n", 1);
  return (0);
}
