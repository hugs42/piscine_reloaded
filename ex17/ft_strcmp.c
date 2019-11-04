int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int		main(int argc, char **argv)
{
	char *s1;
	char *s2;

	s1 = "Bonsoir";
	s2 = "Bonsoiq";
	printf("strcmp = %d\nft_strcmp = %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
	return (0);
}
