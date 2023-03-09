#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	int	middle;
	char temp;

	i = 0;
	j = ft_strlen(str) - 1;
	middle = j / 2;
	while (i <= middle)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "Mange mon pouce frero";
	printf("Original string: %s\nReversed string: %s\n", "Mange mon pouce frero", ft_strrev(str));
}
