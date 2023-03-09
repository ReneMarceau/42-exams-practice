#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_repeat(char *str, char c, int	k)
{
	int	i;

	i = 0;
	while (i <= k)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	k = -1;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (i > 0)
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[1][i] == argv[2][j] && check_repeat(argv[1], argv[1][i], k))
					{
						ft_putchar(argv[1][i]);
						break ;
					}
					j++;
				}
			}
			else
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[1][i] == argv[2][j])
					{
						ft_putchar(argv[1][i]);
						break ;
					}
					j++;
				}
			}
			i++;
			k++;
		}
	}
	ft_putchar('\n');
	return (0);
}