/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/14 15:27:57 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/14 15:35:13 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list **begin_list)
{
	t_list	*last;

	last = *begin_list;
	if (last)
	{
		while (last->next)
			last = last->next;
		return (last);
	}
	return (NULL);
}
