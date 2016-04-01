#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int i =20, b =10;
	int p, q;
	int *ptp, *ptq;
	ptp = &p;
	ptq = &q;
	ft_div_mod(i,b,ptp,ptq);
	printf("%d %d", p, q);
	return (0);
}

