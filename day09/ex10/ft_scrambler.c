/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 02:35:31 by julekgwa          #+#    #+#             */
/*   Updated: 2016/02/12 02:36:59 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int	a_temp;
	int	b_temp;
	int	c_temp;
	int	d_temp;

	a_temp = ***a;
	b_temp = *b;
	c_temp = *******c;
	d_temp = ****d;
	***a = b_temp;
	*b = d_temp;
	*******c = a_temp;
	****d = c_temp;
}
