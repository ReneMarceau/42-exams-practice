#include <unistd.h>
#include <stdio.h>

int	check_repeat(char *str, char c, int k)
{
	int	i;

	i = 0;
	while (i <= k)
	{
		if (str[i++] == c)
			return (0);
	}
	return (1);
}

int	check_repeat_all(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i++] == c)
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 0;
	k = -1;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (i > 0)
			{
				if (check_repeat(argv[1], argv[1][i], k))
					write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
			k++;
		}
		i = 0;
		k = -1;
		while (argv[2][i])
		{
			if (check_repeat(argv[2], argv[2][i], k) && check_repeat_all(argv[1], argv[2][i]))
				write(1, &argv[2][i], 1);
			i++;
			k++;
		}
	}
	write(1, "\n", 1);
	return (0);
}