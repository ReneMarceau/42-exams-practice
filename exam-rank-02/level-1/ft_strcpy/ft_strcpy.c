#include <string.h>
#include <stdio.h>
char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = -1;
	if (!s1 || !s2)
		return (NULL);
	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char s1[] = "Starfoullah il est frais ce chacal mais pas plus que ce bon vieux René :D";
	char s2[] = "La personne à ma droite doit à présent me passer 1000balles";

	printf("Ma fonction: %s\n", ft_strcpy(s1, s2));
	printf("La vrai fonction: %s\n", strcpy(s1, s2));
	return (0);
}