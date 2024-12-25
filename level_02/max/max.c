#include <stdio.h>

int     max(int* tab, unsigned int len)
{
    int i;
    int max;

    i = 1;
    max  = tab[0];
    while (i < len)
    {
        if (tab[i] > max)
        {
           max = tab[i]; 
        }
        i++;
    }
    return (max);
}
int main()
{
    int tab[] = {1,2,3,4,5,8,9,3,3};
    printf("%d", max(tab, 10));
}