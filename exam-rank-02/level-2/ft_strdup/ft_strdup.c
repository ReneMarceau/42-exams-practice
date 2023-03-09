#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int	i;

	str = (char *)malloc(ft_strlen(src) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	printf("Ma Fonction: %s\n", ft_strdup("Wesh le sang"));
	printf("La vrai Fonction: %s\n", strdup("Wesh le sang"));
	return (0);
}
