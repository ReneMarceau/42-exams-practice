#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char rot;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
					rot = argv[1][i] + 13;
				else
					rot = argv[1][i] - 13;
				write(1, &rot, 1);
				i++;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
					rot = argv[1][i] + 13;
				else
					rot = argv[1][i] - 13;
				write(1, &rot, 1);
				i++;
			}
			else
				write(1, &argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
