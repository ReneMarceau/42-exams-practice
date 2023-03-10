#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	to_upper(char c)
{
	return (c - 32);
}

int	ft_strlen_camel(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '_')
			len--;
		i++;
		len++;
	}
	return (len);
}

int	main(int argc, char **argv)
{
	char	*str;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		str = (char *)malloc((ft_strlen_camel(argv[1]) + 1) * sizeof(char));
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				str[j] = to_upper(argv[1][i + 1]);
				i++;
			}
			else
				str[j] = argv[1][i];
			i++;
			j++;
		}
		str[j] = '\0';
		i = 0;
		while (str[i])
			write(1, &str[i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
