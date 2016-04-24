/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 08:55:32 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/15 11:38:41 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_file.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 30

int		ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_error(char **file_name, int i)
{
	ft_writeln(file_name[0]);
	ft_writeln(": ");
	ft_writeln(file_name[i]);
	ft_writeln(":");
	ft_writeln(" No such file or directory");
	ft_writeln(".\n");
}

int		ft_read(int files, char **file_name)
{
	int		fd;
	int		i;
	char	buf[BUF_SIZE];
	int		size;

	fd = 0;
	i = 1;
	size = 0;
	while (i < files)
	{
		if ((fd = open(file_name[i], O_RDONLY)) < 0)
			ft_error(file_name, i);
		if (fd > 0)
		{
			while ((size = read(fd, buf, BUF_SIZE)))
			{
				buf[size] = '\0';
				ft_writeln(buf);
			}
			if (close(fd) == -1)
				ft_writeln("close() error");
		}
		i++;
	}
	return (0);
}
