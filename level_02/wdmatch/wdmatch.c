#include <unistd.h>

int  main(int argc, char **argv)
{
  if (argc == 3)
  {
    int i = 0;
    int j = 0;
    while (argv[2][j])
      {
        if (argv[1][i] == argv[2][j])
          i++;
        j++;
      }
    if (argv[1][i])
      {
        i = 0;
        while (argv[1][i])
            write (1, &argv[1][i++], 1);
      }
  }
  write (1, "\n", 1);
  return (0);
}
