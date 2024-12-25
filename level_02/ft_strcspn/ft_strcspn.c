#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int     i;
    int     j;

    i = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return(i);
}

int main()
{
    const char *s = "samia";
    const char *reject = "rrri";
    size_t res;

    res = ft_strcspn(s, reject);
    printf("%ld", res);
    return (0);
}