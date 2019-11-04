#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	int len;
	char *tab;

	i = 0;
	len = ft_strlen(src);
	if (!src)
		return (NULL);
	tab = (char *)malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int		main(int argc, char **argv)
{
	char *s1;
	char *s2;

	s1 = "COPY ME @@@@@";
	s2 = ft_strdup(s1);
	printf("s2 = %s\n", s2);
	return (0);
}
