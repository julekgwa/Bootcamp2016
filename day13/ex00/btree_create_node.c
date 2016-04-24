/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/18 12:50:09 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/18 13:34:06 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*tmp;

	tmp = (t_btree *)malloc(sizeof(*tmp));
	if (tmp)
	{
		tmp->item = item;
		tmp->right = 0;
		tmp->left = 0;
	}
	else
		return (0);
	return (tmp);
}
