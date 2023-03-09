#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	num;

	num = 1;
	while (num <= n)
	{
		if (num == n)
		{
			return (1);
		}
		num *= 2;
	}
	return (0);
}

int main(void)
{
	int	num;

	num = 16;
	printf("is %d power of 2: %d\n", num, is_power_of_2(num));
}