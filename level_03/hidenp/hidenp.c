#include <unistd.h>

int main(int argc, char **argv)
{
    int i1;
    int i2;

    i1 = 0;
    i2 = 0;
    while (argv[2][i2])
    {
        if (argv[1][i1] == argv[2][i2])
            i1++;
        i2++;
    }
     if (argv[1][i1] == '\0')
            write (1, "1", 1);
        else 
            write (1, "0", 1);
    write (1, "\n", 1);
    return (0);
}