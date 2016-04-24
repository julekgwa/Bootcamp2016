/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/14 14:24:11 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/14 15:54:38 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_list;

	new_list = *begin_list;
	if (!new_list)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		while ((new_list)->next)
		{
			new_list = new_list->next;
		}
		new_list->next = ft_create_elem(data);
	}
}
