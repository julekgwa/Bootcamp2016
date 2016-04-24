/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 12:47:38 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/04 15:19:03 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if((t + 1) < size)
			{
				if(tab[t] > tab[t + 1])
				{
					temp = tab[t];
					tab[t] = tab[t + 1];
					tab[t + 1] = temp;
				}
			}
			t++;
		}
		i++;
	}
}
