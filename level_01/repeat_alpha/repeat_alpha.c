#include <unistd.h>

int    main(int argc, char **argv)
{
    if (argc == 2)
    {
        int    i = 0;
        int    repeat = 0;
        while (argv[1][i])
        {
            repeat = 0;
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                repeat = argv[1][i] - 'a' + 1;
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                repeat = argv[1][i] - 'A' + 1;
            else
                write (1, &argv[1][i], 1);
            while (repeat--)
                write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
