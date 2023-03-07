#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(void)
{
	printf("Ma Fonction: %d\n", ft_strlen("Azul"));
	printf("La vrai Fonction: %lu\n", strlen("Azul"));
	return (0);
}