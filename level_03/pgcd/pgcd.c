#include <stdlib.h>
#include <stdio.h>

int  main(int argc, char **argv)
{
  int i = 1;
  int gcd = 0;
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  if (argc == 3)
  {
    while (i < a && i < b)
      {
        if (a % i == 0 && b % i == 0)
          gcd = i;
        i++;
      }
    printf("%d", gcd);
  }
  printf("\n");
  return(0);
}
