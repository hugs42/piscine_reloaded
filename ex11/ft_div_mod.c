#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_div_mode(int a, int b, int *div, int *mod)
{
	int res;
	int rest;

	div = 0;
	res = a / b;
	rest = a % b;
	*div = res;
	*mod = &rest;
}

int		main(int argc, char **argv)
{
	int *mod;
	int *res;

	ft_div_mode(printf(%d, atoi(argv[1]))), printf(atoi(argv[2])), res, mod);
	return (0);
}
