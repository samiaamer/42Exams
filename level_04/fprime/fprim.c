#include <stdio.h>
#include <stdlib.h>

void fprime(unsigned int nbr)
{
    int factor;
    
    factor = 2;
    if (nbr == 1)
        printf("1");
    else
    {
        while (nbr > 1)
        {
            if (nbr % factor == 0)
            {
                printf("%d", factor);
                nbr /= factor;
                if (nbr > 1)
                    printf("*");
                factor--;
            }
            factor++;
        }
        
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        fprime(atoi(argv[1]));
    printf("\n");
    return (0);
}