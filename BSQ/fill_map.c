/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 16:03:41 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/21 16:07:41 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "ft_bsq.h"

int		count_cols(char *filename, int cols)
{
	char	buf[1];
	int		fd;
	int		cont;
	char	prev;

	fd = 0;
	cont = 1;
	fd = open(filename, O_RDONLY);
	if (fd)
	{
		while ((read(fd, buf, BUF_SIZE)) && (cont == 1))
		{
			if (prev == 'x' && buf[0] == '\n')
			{
				cont = 1;
				cols = 0;
			}
			else if ((buf[0] != '\n') && (buf[0] != ' '))
				cols++;
			else
				cont = 0;
			prev = buf[0];
		}
	}
	else
		exit(1);
	return (cols);
}

int		count_rows(char *filename)
{
	int		rows;
	int		f_row;
	char	buf[1];
	int		fd;
	int		size;

	fd = 0;
	rows = 0;
	f_row = 0;
	fd = open(filename, O_RDONLY);
	if (fd)
	{
		while ((size = read(fd, buf, BUF_SIZE)))
		{
			if (f_row == 0 && buf[0] == '\n')
				f_row = 1;
			if (buf[0] == '\n' && f_row == 1)
				rows++;
		}
	}
	return (rows - 1);
}

int		fill_map(int **map, int fd, int row, int col)
{
	char	buf[BUF_SIZE];
	int		first_line;

	first_line = 0;
	while ((read(fd, buf, BUF_SIZE)))
	{
		if (buf[0] == '\n')
		{
			if (first_line != 0)
				row += 1;
			col = 0;
			first_line = 1;
		}
		else
		{
			if (buf[0] == '.' && first_line != 0)
				map[row][col] = 1;
			else if (buf[0] == 'o' && first_line != 0)
				map[row][col] = 0;
			col++;
		}
	}
	return (0);
}

int		**ft_create_map(char *filename, int nb_rows, int nb_cols)
{
	int		**map;
	int		fd;
	int		row;
	int		col;

	row = 0;
	col = 0;
	map = allocate_mem(nb_rows, nb_cols);
	if (!map)
		return (map);
	fd = open(filename, O_RDONLY);
	if (!fd)
		exit(1);
	fill_map(map, fd, row, col);
	return (map);
}
