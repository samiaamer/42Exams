int     ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int n = 1;
    int res = 0;
    if (str_base < 2 || str_base > 16)
        return (0);
    if (str[i] == '-')
        {
            n = -1;
            
            i++;
        }
    while (str[i])
        {
            int digit = 0;
            if (str[i] >= '0' && str[i] <= '9')
                digit += str[i] - 48;
            else if (str[i] >= 'A' && str[i] <= 'F')
                digit += str[i] - 'A' + 10;                                                                                    
            else if (str[i] >= 'a' && str[i] <= 'f')                                                                                        
                digit += str[i] - 'a' + 10;                                                                                    
            else                                                                                                                            
                break;                                                                                                          
            if (digit >= str_base)                                                                                                         
                break;                                                                                                         
            res = res * str_base + digit;                                                                                          
            i++;                                                                                                            
        }                                                                                                                       
    return (res * n);
}
