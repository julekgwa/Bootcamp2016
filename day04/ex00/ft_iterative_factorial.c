#include	<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	while(nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}
