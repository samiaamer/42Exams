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
    if (!av[1][i])
            write(1, av[1], i);
  }
  write (1, "\n", 1);
  return (0);
}
