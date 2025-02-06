#include <unistd.h>

rstr_capital(int argc, char **argv)
{
  int i = 1;
  int j = 0;
  while (i < argc)
    {
      while (argv[i][j])
        {
          if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
            argv[i][j] += 32;
          if (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t' || argv[i][j + 1] == '\0')
          {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
              argv[i][j] -=32;
          }
          write (1, &argv[i][j], 1);
          j++;
        }
      i++;
    }
}

int  main(int argc, char **argv)
{
  if (argc > 1)
    rstr_capital(argc, argv);
  write(1, "\n", 1);
  return (0);
}
