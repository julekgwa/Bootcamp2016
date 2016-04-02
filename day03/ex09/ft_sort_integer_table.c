#include	<stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	t;
	int	temp;

	i = 0;
	while(i < size)
	{
		t = 0;
		while(t < size)
		{
			if(tab[t] > tab[t + 1])
			{
				temp = tab[t];
				tab[t] = tab[t + 1];
				tab[t + 1] = temp;
			}
			t++;
		}
		i++;
	}
}

int main()
{
	int num[] = {5,3,1,9,2,0};
	ft_sort_integer_table(num, 6);

	int i = 0;
	while( i < 6)
	{
		printf("%d ", num[i]);
		i++;
	}
	return 0;
}
