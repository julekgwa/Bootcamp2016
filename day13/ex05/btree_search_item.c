/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/18 17:56:07 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/18 17:57:38 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!root)
		return (0);
	else
	{
		if ((*cmpf)(data_ref, root->item) == 0)
			return (root);
		else if ((*cmpf)(data_ref, root->item) < 0)
			btree_search_item(root->left, data_ref, cmpf);
		else if ((*cmpf)(data_ref, root->item) > 0)
			btree_search_item(root->right, data_ref, cmpf);
	}
	return (0);
}
