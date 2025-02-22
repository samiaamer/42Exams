#include <unistd.h>

int  main(int argc, char **argv)
{
  if (argc == 2)
  {
    int s_w;
    int e_w;
    int i = 0;
    while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
      i++;
    s_w = i;
    while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
      i++;
    e_w = i - 1;
    while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
        i++;
    int w_pr = 0;
    while (argv[1][i])
    {
        if (argv[1][i] == ' ' || argv[1][i] == '\t')
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            if (argv[1][i])
              write (1, " ", 1);
        }
        else 
        {
            write (1, &argv[1][i], 1);
            i++;
            w_pr = 1;
        }
    }
    if (w_pr)
      write(1, " ", 1);
    while(s_w <= e_w)
      {
          write(1, &argv[1][s_w], 1);
          s_w++;
      }
  }
  write (1, "\n", 1);
  return (0);
}
