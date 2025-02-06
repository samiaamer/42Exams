#include <stdlib.h>
#include <stdio.h>

int  main(int argc, char **argv)
{
  int i = 1;
  int gdc = 0;
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  if (argc == 3)
  {
    while (i < a && i < b)
      {
        if (a % i == 0 && b % i == 0)
          gdc = i;
        i++;
      }
    printf("%d", gdc);
  }
  printf("\n");
  return(0);
}
