#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int dif = (start > end) ? start - end : end - start;
    int *m = (int *)malloc(sizeof(int) * dif);
    if (!m)
        return (0);
    while(start != end)
        *m = start > end ? start-- : start++;
    *m = start;
    return (m);
}
