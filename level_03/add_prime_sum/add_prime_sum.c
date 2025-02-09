#include <unistd.h>

void	ft_putnbr (int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = '0' + (n % 10);
	write (1, &c, 1);
}

int	is_prime (int n)
{
	int	i = 3;
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_atoi (char *s)
{
	int	n = 0;
	while (*s >= '0' && *s <= '9')
		n = n * 10 + *s++ - '0';
	return (n);
}

int	main (int argc, char **argv)
{
	if (argc == 2 && ft_atoi(argv[1]))
	{
		int	n = ft_atoi(argv[1]);
		int	i = 2;
		int	sum = 0;
		while (i <= n)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
		write (1, "\n", 1);
		return (0);
	}
	write (1, "0\n", 2);
	return (0);
}
