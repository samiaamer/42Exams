#include <unistd.h>

void    ft_print_numbers()
{
    //write (1, "0123456789", 10);
    
    
    char    i;
    
    i = '0';
    while (i <= '9')
    {  
        write (1, &i, 1); 
        i++;
    }
    write (1, "\n", 1);
}
/*
int main()
{
    ft_print_numbers();
    return (0);
}*/