#include <stdlib.h>

char    *ft_itoa(int nbr)
{
    int len = 0;
    int tmp= nbr;
    char *str;
    if (nbr == 0)
    {
        len = 1;
        str[0] = '0';
    }
    while (tmp)
    {
        tmp /= 10;
        len++;
    }
    str = malloc(len + 1);
    if (!str)
        return (0);
    str[len] = '\0';
    if (nbr == INT_MIN)
        return ("-2147483648");
    if (nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
    }
    while (nbr)
    {
        str[len] = (nbr % 10) + '0';
        len--;
        nbr /= 10;
    }
    return (str);
}
