#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char b = 0;
    unsigned int len = 8;

    while (len--)
    {
        b = (b << 1) | (octet & 1);
        octet >>= 1;
    }
    return (b);
}

void    print_bits(unsigned char octet)
{
    int	i = 256;
	while (i >>= 1)
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}
int main(void)
{
    unsigned char octet = 0b00100110; // Example byte (38 in decimal)
    unsigned char reversed = reverse_bits(octet);

    write(1, "Original: ", 10);
    print_bits(octet);
    write(1, "\n", 1);

    write(1, "Reversed: ", 10);
    print_bits(reversed);
    write(1, "\n", 1);

    return 0;
}
