#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("input    :%d\n", atoi(argv[1]));
	printf("absolute :%d\n", ABS(atoi(argv[1])));
	return (0);
}
