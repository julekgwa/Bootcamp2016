#include	<unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	char	a;
	a = '0';

	while(a <= '9')
	{
		ft_putchar(a);
		a++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
