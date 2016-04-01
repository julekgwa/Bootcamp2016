#include	<unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_combn(int nbr)
{
	char	a;
	char	b;
	int	i;
	int	c;
	a = '0';
	i = 0;
	c = 0;

	while(i <= nbr)
	{
		b = '0';
		while(c <= nbr)
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(',');
			b++;
			c++;
		}
		i++;
		a++;
	}
}

int	main(void)
{
	ft_print_combn(122);
	return (0);
}	
