#include	<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	main(void)
{
	int i = 12, b =22;
	int*p;
	int *c;
	p = &i;
	c = &b;
	ft_swap(p,c);
	printf("%d %d", i, b);
	return (0);
}

