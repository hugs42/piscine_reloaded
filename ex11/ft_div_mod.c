#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_div_mode(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int		main(int argc, char **argv)
{
	int *mod;
	int *res;

	ft_div_mode(printf("res = %d\n mod = %d\n", atoi(argv[1]))), printf(atoi(argv[2]));
	return (0);
}
