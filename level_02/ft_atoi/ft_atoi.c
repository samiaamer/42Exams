#include <unistd.h>
#include <stdio.h>
//#include <stdlib.h>

int	ft_atoi(const char *str)
{
    int i;
    int sign;
    int digit;
    int result;

    result = 0;
    sign = 1;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        if (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
                sign = -1;
            i++;
        }
        if (str[i] >= '0' && str[i] <= '9')
        {
            digit = str[i] - '0';
            i++;
            result = result * 10 + digit;
        }
        else
            break;
    }
    return (sign * result);
}
/*
int main()
{
    char str[] = "  -123s2";
    printf("%d\n", ft_atoi(str));
    printf("%d\n", atoi(str));
    return (0);
}*/