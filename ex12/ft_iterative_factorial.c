#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (i >= 1)
		{
			nb = i * nb;
			i--;
		}
		return (nb);
	}
}

int		main(int argc, char **argv)
{
	if (ac == 2)
	{
		printf("Factorielle %d = %d\n", ft_iterative_factorial(atoi(argv[1])));
	}
	return (0);
}
