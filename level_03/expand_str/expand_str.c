#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int flag;

    flag = 0;
    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                while (argv[1][i] == ' ' || argv[1][i] == '\t')
                    i++;
                flag = 1;
            }
            if (flag)
                write (1, "   ", 3);
            flag = 0;
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}
