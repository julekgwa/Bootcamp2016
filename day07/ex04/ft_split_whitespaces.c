/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 09:52:00 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/08 11:10:59 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whitespaces(char *str)
{
	char	*temp;
	char	**string;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] > 33)
		{
			temp[j] = str[i];
			j++;
		}
		else
		{
			string[k] = (char *)malloc(sizeof((*temp) * j - 1));
			string[k] = temp;
			temp = NULL;
		}
		i++;
	}
	return (string);
}
