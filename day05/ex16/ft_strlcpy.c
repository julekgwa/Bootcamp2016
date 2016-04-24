/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 13:32:22 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/06 18:20:32 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	int				src_len;
	int				j;

	i = 0;
	j = 0;
	n = size;
	src_len = 0;
	while (src[j])
	{
		src_len++;
		j++;
	}
	while (i < size)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (src_len);
}
