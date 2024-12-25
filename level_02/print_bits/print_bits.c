#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char b;

    while (i--)
    {
        b = (octet >> i & 1) + '0';
        write (1, &b, 1);
    }
    
}
int main(void)
{
    unsigned char num = 2; 
    print_bits(num);
    write(1, "\n", 1);
    return (0);
}