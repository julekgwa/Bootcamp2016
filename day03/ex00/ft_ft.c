#include	<stdio.h>
#include	<stdlib.h>

void	ft_ft(int*nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int *p;
	p = (int*)malloc(sizeof(int*));
	ft_ft(p);
	printf("%d \n", *p);
	return (0);
}
