/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 09:39:56 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/15 09:39:59 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_file.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_writeln("File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_writeln("Too many arguments.\n");
		return (1);
	}
	ft_read(argv);
	return (0);
}
