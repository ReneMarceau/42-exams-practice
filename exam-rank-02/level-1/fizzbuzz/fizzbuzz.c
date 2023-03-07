#include <unistd.h>

//Besoin de putchar sinon kapout
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		write(1, &string[i++], 1);
}

void	ft_putnbr(int num)
{
	if (num > 9)
	{
		// Formule à ce rappeler***
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}

int	main(void) {
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			ft_putstr("fizzbuzz");
		else if (number % 3 == 0)
			ft_putstr("fizz");
		else if (number % 5 == 0)
			ft_putstr("buzz");
		else
			ft_putnbr(number);
		ft_putchar('\n');
		number++;
	}
	return (0);
}