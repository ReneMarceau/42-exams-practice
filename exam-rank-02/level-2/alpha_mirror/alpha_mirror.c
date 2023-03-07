#include <unistd.h>

int	main(int argc, char **argv)
{
	char	character;
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				{
					character = 'z' - (argv[1][i] - 'a');
					write(1, &character, 1);
				}
				else
				{
					character = 'a' - (argv[1][i] - 'z');
					write(1, &character, 1);
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				{
					character = 'Z' - (argv[1][i] - 'A');
					write(1, &character, 1);
				}
				else
				{
					character = 'A' - (argv[1][i] - 'Z');
					write(1, &character, 1);
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
