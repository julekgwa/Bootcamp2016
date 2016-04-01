#include	<unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	a = '0';
	while(a <= '9')
	{
		b = '0';
		while(b <= '9')
		{
			c = b + 1;
			while(c <= '9')
			{
				d = c + 1;
				while(d <= '9')
				{
					ft_putchar(' ');
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(d);
					ft_putchar(',');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
