#include <unistd.h>

char    *ft_itoa(int nbr)
{
    int len;
    int tmp;
    char *result;

    len = 0;
    tmp = nbr;
    if (nbr < 0)
        len = 1;
    while (tmp)
    {
        tmp /= 10;
        len++;
    }
    result = (char *)malloc(len + 1);
    if (!result)
        return (0);
    result[len] = '\0';
    if (nbr == 0)
        result[0] = '0';
    if (nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }

    while (nbr)
    {
        result[len] = (nbr % 10) + '0';
        len--;
        nbr /= 10;
    }
    return (result);
}