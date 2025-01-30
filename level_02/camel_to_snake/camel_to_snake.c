#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    char *result;

    j = 0;
    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
            i++;
        result = malloc((i * 2) + 1);
        i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                if (i != 0)
                    result[j++] = '_';
                result[j++] = argv[1][i] + 32;
            }
            else
                result[j++] = argv[1][i];
            i++;
        }
        result[j] = '\0';
        write (1, result, j);
        free(result);
    }
    write (1, "\n", 1);
    return (0);
}