/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 14:02:34 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/12 18:14:05 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				*ft_set_copy(char *src)
{
	int		len;
	int		i;
	char	*dup;

	i = 0;
	len = 0;
	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	dup = (char *)malloc(sizeof((*dup) * (len + 1)));
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_par *stock;
	int			len;

	i = 0;
	j = 0;
	len = 0;
	stock = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	if (!stock)
		return (NULL);
	while (i < ac)
	{
		len = 0;
		while (av[i][len] != '\0')
			len++;
		stock[i].size_param = len;
		stock[i].str = av[i];
		stock[i].copy = ft_set_copy(av[i]);
		stock[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
