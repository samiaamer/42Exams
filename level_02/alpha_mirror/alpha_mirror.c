#include <unistd.h>

int     main(int argc, char **argv)
{
    int     i;
    char     mirror;
    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                mirror = 'z' - (argv[1][i] - 'a');
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                mirror = 'Z' - (argv[1][i] - 'A');
            else   
                mirror = argv[1][i];
            write (1, &mirror, 1);
            i++;           
        }
    }
    write (1, "\n", 1);
    return (0);
}