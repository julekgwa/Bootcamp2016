/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 08:55:32 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/15 11:29:34 by julekgwa         ###   ########.fr       */
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

void	ft_error(char *file_name)
{
	ft_writeln(file_name);
	ft_writeln(": ");
	ft_writeln(file_name);
	ft_writeln(":");
	ft_writeln(" No such file or directory");
	ft_writeln(".\n");
}

int		ft_read(char **file_name)
{
	int		fd;
	char	buf[BUF_SIZE];
	int		size;

	fd = 0;
	size = 0;
	fd = open(file_name[1], O_RDONLY);
	if (fd == -1)
	{
		ft_error(file_name[1]);
		return (1);
	}
	while ((size = read(fd, buf, BUF_SIZE)))
	{
		buf[size] = '\0';
		ft_writeln(buf);
	}
	if (close(fd) == -1)
	{
		ft_writeln("close() error");
	}
	return (0);
}
