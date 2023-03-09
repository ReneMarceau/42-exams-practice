#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int num;
	unsigned int	i;

	i = 0;
	if (!len)
		return (0);
	num = tab[0];
	while (i < len)
	{
		if (num < tab[i])
			num = tab[i];
		i++;
	}
	return (num);
}

int	main(void)
{
	int	numbers[] = {-1, -3, -4, -56, -8};
	printf("The largest number is: %d\n", max(numbers, 5));
	return (0);
}