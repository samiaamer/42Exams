#include <unistd.h>

void putnbr(int i)
{
    char num;

    if (i > 9)
        putnbr(i / 10);
    num = i % 10 + '0';
    write (1, &num, 1);
}

int main()
{
    int i;
    
    i = 1;
    while (i <= 100)
    {  
        if (i % 3 == 0 && i % 5 == 0)
            write (1, "fizzbuzz", 8);
        else if (i % 5 == 0)
            write (1, "buzz", 4);
        else if (i % 3 == 0)
            write (1, "fizz", 4);
        else
            putnbr(i);
        write (1, "\n", 1);
        i++;
    }
    return (0);
}