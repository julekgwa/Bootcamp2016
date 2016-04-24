/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 15:54:39 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/21 15:54:41 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft_bsq.h"

int		min(int a, int b, int c)
{
	int	m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

void	ft_find_lrge_square(int **map, int max_of_s, int max_i, int max_j)
{
	int	i;
	int	j;

	i = max_i;
	while (i > (max_i - max_of_s))
	{
		j = max_j;
		while (j > (max_j - max_of_s))
		{
			map[i][j] = '*';
			j--;
		}
		i--;
	}
}

void	ft_frst_col_row(int **map, int **tmp_map, int rows, int cols)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < rows)
	{
		tmp_map[i][0] = map[i][0];
		i++;
	}
	while (j < cols)
	{
		tmp_map[0][j] = map[0][j];
		j++;
	}
}

void	fill_tmp_map(int **map, int **tmp_map, int rows, int cols)
{
	int	i;
	int	j;

	i = 1;
	while (i < rows)
	{
		j = 1;
		while (j < cols)
		{
			if (map[i][j] == 1)
				tmp_map[i][j] = min(tmp_map[i][j - 1], tmp_map[i - 1][j],
					tmp_map[i - 1][j - 1]) + 1;
			else
				tmp_map[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_find_max(int **tmp_map, int *max_of, int rows, int cols)
{
	int	max_of_s;
	int	max_i;
	int	max_j;
	int	i;
	int	j;

	i = 0;
	max_of_s = tmp_map[0][0];
	max_i = 0;
	max_j = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (max_of_s < tmp_map[i][j])
			{
				max_of_s = tmp_map[i][j];
				max_i = i;
				max_j = j;
			}
			j++;
		}
		i++;
	}
	max_of[0] = max_of_s;
	max_of[1] = max_i;
	max_of[2] = max_j;
}
