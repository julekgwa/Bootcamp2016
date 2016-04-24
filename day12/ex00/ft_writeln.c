/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writeln.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 11:17:19 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/15 11:28:44 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_file.h"
#include <unistd.h>

void	ft_writeln(void *buf)
{
	int	size;

	size = ft_len(buf);
	write(1, buf, size);
}
