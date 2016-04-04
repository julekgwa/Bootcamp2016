#include	<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	total_power;
	int	i;

	total_power = 1;
	i = 1;
	while(i <= power)
	{
		total_power *= nb;
		i++;
	}
	return (total_power);
}

int	main()
{
	printf("%d\n", ft_iterative_power(4,2));
	return 0;
} 
	
