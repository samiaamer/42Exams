#include <stdio.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
/*
int main()
{
    char str[] = "meaw";
    printf("%d\n", ft_strlen(str));
    return (0);
}*/