/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/14 15:48:05 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/14 16:03:13 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*temp;
	t_list	*list;
	int		i;

	i = 1;
	if (ac == 1)
		return (NULL);
	list = ft_create_elem(av[0]);
	temp = list;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = temp;
		temp = list;
		i++;
	}
	return (list);
}
