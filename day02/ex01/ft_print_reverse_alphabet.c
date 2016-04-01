#include	<unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char	z;
	z = 'z';

	while(z >= 'a')
	{
		ft_putchar(z);
		z--;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
