/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 08:34:32 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/08 10:29:21 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	count;

	i = min;
	count = 0;
	if (min < max)
	{
		range = (int *)malloc(sizeof(int *));
		while (i < max)
		{
			range[count] = i;
			i++;
			count++;
		}
	}
	else
		range = NULL;
	return (range);
}
