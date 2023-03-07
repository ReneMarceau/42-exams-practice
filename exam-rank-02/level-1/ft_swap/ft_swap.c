#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	num1;
	int	num2;

	num1 = 41;
	num2 = 21;
	ft_swap(&num1, &num2);
	printf("num1: %d\nnum2: %d\n", num1, num2);
	return (0);
}