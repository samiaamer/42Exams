#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int n;
    int *s;

    n = max >= min ? max - min : min - max;
    s = (int *)malloc(sizeof(int) * n);
    if (!s)
        return (0);
    while (max != min)
        *s++ = max > min ? min++ : min--;
    *s = min;
    return (s - n);
}