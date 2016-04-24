/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 14:24:59 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/05 16:06:38 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if ((nb > 12) || (nb < 0))
		return (0);
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
