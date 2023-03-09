#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("Ma Fonction: %lu\n", ft_strcspn("Wesh la zone", "xxxh la zone"));
	printf("La vraie Fonction: %lu\n", strcspn("Wesh la zone", "xxxh la zone"));
	return (0);
}