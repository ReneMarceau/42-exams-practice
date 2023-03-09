#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	printf("Ma Fonction: %s\n", ft_strpbrk("Wesh la zone", "xxxx xa xone"));
	printf("La vrai Fonction: %s\n", strpbrk("Wesh la zone", "xxxx xa xone"));
	return (0);
}
