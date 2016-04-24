/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/14 16:20:26 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/14 16:24:17 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list **begin_list, unsigned int nbr)
{
	unsigned int	size;
	t_list			*temp;

	size = 1;
	temp = *begin_list;
	while (temp)
	{
		if (size == nbr)
			return (temp);
		size++;
		temp = temp->next;
	}
	return (NULL);
}
