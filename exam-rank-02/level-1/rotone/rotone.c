#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	char	rot;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (argv[1][i] != 'z')
					rot = argv[1][i] + 1;
				else
					rot = 'a';
				write(1, &rot, 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (argv[1][i] != 'Z')
					rot = argv[1][i] + 1;
				else
					rot = 'A';
				write(1, &rot, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}