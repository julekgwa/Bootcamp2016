/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 18:16:22 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/12 18:18:52 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_display_nbr(int n)
{
	if (n >= 10)
	{
		ft_display_nbr(n / 10);
		ft_display_nbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

void	ft_print_word(char **tab)
{
	int	i;

	i = 0;
	while (tab && *tab)
	{
		i = 0;
		while ((*tab)[i])
			ft_putchar((*tab)[i++]);
		ft_putchar('\n');
		++tab;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	while (par[i].str != '\0')
	{
		j = 0;
		while (par[i].copy[j] != '\0')
		{
			ft_putchar(par[i].copy[j]);
			j++;
		}
		ft_putchar('\n');
		ft_display_nbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_word(par[i].tab);
		i++;
	}
}
