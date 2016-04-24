/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 16:54:53 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/05 16:56:41 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	terminator;
	int	temp;
	int	next_nbr;

	terminator = 0;
	next_nbr = 0;
	while(terminator == 0)
	{
		next_nbr = nb + 1;
		temp = next_nbr / 2;
		if (next_nbr <= 1)
			return (0);
		if((next_nbr == 2) || (temp * 2) != next_nbr)
		{
			terminator = 1;
			return (next_nbr);
		}
	}
	return (next_nbr);
}
