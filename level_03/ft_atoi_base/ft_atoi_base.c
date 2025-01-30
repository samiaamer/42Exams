int     ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int n = 1;
    int res = 0;
    if(str[i] == '-')
    {
        n = -1;
        i++;
    }
    while (str[i])
    {
        res *= str_base;
        if (str[i] >= '0' && str[i] <= '9')
            res += str[i] - 48;
        if (str[i] >= 'A' && str[i] <= 'Z')
            res += str[i] - 55;
        if (str[i] >= 'a' && str[i] <= 'z')
            res += str[i] - 87;
        i++;
    }
    return (res * n);
}