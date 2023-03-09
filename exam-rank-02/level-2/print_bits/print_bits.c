#include <unistd.h>

// À retenir par coeur
void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bits;
	while (i >= 0)
	{
		bits = (octet >> i & 1) + '0';
		write(1, &bits, 1);
		i--;
	}
}

int	main(void)
{
	print_bits(2);
	return (0);
}
