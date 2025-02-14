#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int     i;
    int     j;
    char    *res;
    
    i = 0;
    j = 0;
    while (src[i])
        i++;
    res = malloc(i + 1);
    if (!res)
        return (0);
    i = 0;
    while (src[i])
    {
        res[j] = src[i];
        j++;
        i++;
    }
    res[j] = '\0';
    j = 0;
    return (res);
}

int main()
{
    char *src = "samia, 42";
    char *dup = ft_strdup(src);
    printf("dup: %s\n", dup);
    printf("src: %s", src);
    return (0);
}
