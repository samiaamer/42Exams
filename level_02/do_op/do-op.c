#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     main(int argc,  char **argv)
{
    int     a;
    int     b;
    char    op;
    int     res;

    res = 0;
    if (argc == 4)
    {
        a = atoi(argv[1]);
        op = argv[2][0];
        b = atoi(argv[3]);
        if (op == '-')
            res = a - b;
        else if (op == '+')
            res = a + b;
        else if (op == '*') 
            res = a * b;
        else if (op == '/')
            res = a / b;
        printf ("%d", res);
    }
    printf("\n");
    return (0);
}