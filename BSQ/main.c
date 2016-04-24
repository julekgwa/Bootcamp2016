/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/20 11:04:21 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/21 18:11:32 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "ft_bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		**allocate_mem(int rows, int cols)
{
	int	i;
	int	j;
	int	**array;

	i = 0;
	j = 0;
	array = (int **)malloc(rows * sizeof(int *));
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			array[i] = malloc(sizeof(int) * cols);
			j++;
		}
		i++;
	}
	return (array);
}

void	ft_build_max_square(int **map, int rows, int cols)
{
	int	**tmp_map;
	int	*max_of;

	max_of = (int *)malloc(sizeof(int));
	tmp_map = allocate_mem(rows, cols);
	ft_frst_col_row(map, tmp_map, rows, cols);
	fill_tmp_map(map, tmp_map, rows, cols);
	ft_find_max(tmp_map, max_of, rows, cols);
	ft_find_lrge_square(map, max_of[0], max_of[1], max_of[2]);
}

void	ft_print_square(int **square, int rows, int cols)
{
	int	i;
	int	j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (square[i][j] == 42)
				ft_putchar('X');
			else if (square[i][j] == 0)
				ft_putchar('o');
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	cols;
	int	rows;
	int	**arr;
	int	i;

	i = 1;
	if (argc < 1)
		return (1);
	while (i < argc)
	{
		cols = count_cols(argv[i], 0);
		rows = count_rows(argv[i]);
		arr = ft_create_map(argv[i], rows, cols);
		ft_build_max_square(arr, rows, cols);
		ft_print_square(arr, rows, cols);
		i++;
	}
	return (0);
}
