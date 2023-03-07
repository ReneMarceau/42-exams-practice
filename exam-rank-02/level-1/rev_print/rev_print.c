#include <unistd.h>

int ft_strlen(char *string)
{
	int	len;

	len = 0;
	while (string[len])
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]);
		while (i > 0)
			write(1, &argv[1][--i], 1);

	}
	write(1, "\n", 1);
	return (0);
}