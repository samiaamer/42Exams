#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int	i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}
int main(void)
{
    unsigned char num = 2; 
    print_bits(num);
    write(1, "\n", 1);
    return (0);
}
