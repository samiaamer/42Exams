#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    int     i;
    int     j;

    i = 0;
    while (s[i])
    {
        j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                break;
            j++;
        }
        if (accept[j] == '\0')
            break;
        i++;
    }
    return (i);
}
int	main(void)
{
	char haystack[] = "samia";
	char accept[] = "tgaThis";

	printf("%zu\n", ft_strspn(haystack, accept));
}