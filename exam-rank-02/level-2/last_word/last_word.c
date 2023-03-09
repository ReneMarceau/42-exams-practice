#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	index_lastword(char *str){
	int	i;

	i = ft_strlen(str) - 1;
	while (str[i] == ' ')
		i--;
	while (i > 0)
	{
		if (str[i - 1] == ' ')
			return (i);
		i--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = index_lastword(argv[1]);
		while (argv[1][i] != '\0' && argv[1][i] != ' ')
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}