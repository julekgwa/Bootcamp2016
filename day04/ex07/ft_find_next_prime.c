#include	<stdio.h>

int	ft_find_next_prime(int nb)
{
	int	terminator;
	int	temp;
	int	next_nbr;

	terminator = 0;
	while(terminator == 0)
	{
		next_nbr = nb + 1;
		temp = next_nbr / 2;
		if((temp == 1) || (temp * 2) != next_nbr)
			return (next_nbr);
	}
}


int main()
{
	printf("%d\n",ft_find_next_prime(2));
	return 0;
}
