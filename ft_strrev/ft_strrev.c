#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
    int len;
    int i;
    char tmp;

    i = 0;
    len = 0;
    while (str[len] != '\0')
        len++;
    while (i < len / 2)
    {
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
        i++;  
    }
    return (str);
}
/*
int main()
{
    char str[] = "samia";
    printf ("%s\n",ft_strrev(str));
    return(0);
}*/