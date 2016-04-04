#include	<stdio.h>

int	ft_recursive_factorial(int nb)
{

	if(nb == 1)
		return nb;
	else
		return  (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
	printf("%d\n", ft_recursive_factorial(4));
	return 0;
}
