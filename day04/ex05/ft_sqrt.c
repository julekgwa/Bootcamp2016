/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 17:13:08 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/05 17:13:33 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;
	int	sqrt;

	a = 0;
	sqrt = 0;
	if (nb < 0)
		return (0);
	while (sqrt < nb)
	{
		a = nb - (sqrt * sqrt);
		if (a == 0)
			return (sqrt);
		else if (a < 0)
			return (sqrt - 1);
		sqrt++;
	}
	return (sqrt);
}
