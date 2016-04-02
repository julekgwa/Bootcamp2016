#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a /= *b;
	*b = temp % *b;
}

int	main(void)
{
	int a = 20, b =10;
	int *p,*s;
	p = &a;
	s = &b;
	ft_ultimate_div_mod(p,s);
	printf("%d %d", a,b);
	return (0);
}
