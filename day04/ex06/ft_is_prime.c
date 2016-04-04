#include	<stdio.h>

int	ft_is_prime(int nb)
{
	int prime;

	prime = nb / 2;
	if(prime == 1 || (prime * 2) != nb)
		return (1);
	else
		return (0);
}

int main()
{
	printf("%d", ft_is_prime(1));
	return 0;
}
