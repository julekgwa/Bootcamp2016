#include	<unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	char	a;
	a = 'a';

	while(a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
