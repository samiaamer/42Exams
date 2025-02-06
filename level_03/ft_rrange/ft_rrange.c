#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int dif = (end > start) ? end - start : start - end;
    int *n = (int *)malloc(sizeof(int) * dif);
    if (!n)
        return (0);
    while (end != start)
        *n = end > start ? end-- : end++;
    *n = end;
    return(n);
}
