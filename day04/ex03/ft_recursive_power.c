#include	<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if(power == 0)
		return (1);
	else if(power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int	main()
{
	printf("%d\n", ft_recursive_power(4, 3));
	return 0;
}
