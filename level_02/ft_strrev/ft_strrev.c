#include <unistd.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
    int len = 0;
    int i = 0;
    char tmp;
    while (str[len])
        len++;
    while (len > i)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
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
