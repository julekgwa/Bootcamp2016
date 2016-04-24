/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/14 16:05:53 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/14 16:17:28 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;
	t_list	*temp;

	temp = NULL;
	list = *begin_list;
	while (list)
	{
		if (list->next)
			temp = list->next;
		else
			temp = NULL;
		free(list);
		list = temp;
	}
}
