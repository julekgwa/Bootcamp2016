/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 17:05:36 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/05 17:08:52 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total_power;
	int	i;

	total_power = 1;
	i = 1;
	if (power < 0)
		return (0);
	else if (power == 1)
		return (1);
	while (i <= power)
	{
		total_power *= nb;
		i++;
	}
	return (total_power);
}
