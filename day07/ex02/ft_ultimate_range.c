/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 08:43:55 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/08 10:55:17 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *new_rnge;

	new_rnge = (int *)malloc(sizeof(int *));
	i = 0;
	if (min < max)
	{
		while (min < max)
		{
			new_rnge[i] = min;
			i++;
			min++;
		}
	}
	else
		range = NULL;
	*range = new_rnge;
	return (i);
}
