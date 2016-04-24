/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/14 13:39:28 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/14 13:47:56 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *temp;

	temp = NULL;
	temp = (t_list *)malloc(sizeof(temp));
	if (temp == NULL)
		return (NULL);
	temp->data = data;
	temp->next = NULL;
	return (temp);
}
