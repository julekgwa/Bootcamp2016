/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writeln.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 10:05:38 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/15 10:05:43 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_file.h"
#include <unistd.h>

void	ft_writeln(void *buf)
{
	int size;

	size = ft_len(buf);
	write(1, buf, size);
}
