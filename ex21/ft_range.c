#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	if (!tab)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int		main(int ac, char **av)
{
	int i;
	int *tab;

	i = 0;
	if (ac != 3)
		return (1);
	tab = ft_range(atoi(av[1]),atoi(av[2]));
	while (tab[i] != '\0')
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
