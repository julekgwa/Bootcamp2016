/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 17:37:11 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/06 18:19:46 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	j;
	int	dest_len;

	i = 0;
	j = 0;
	dest_len = 0;
	while (dest[i] != '\0')
	{
		dest_len++;
		i++;
	}
	while (j < nb)
	{
		dest[dest_len] = src[j];
		dest_len++;
		j++;
	}
	dest[dest_len + 1] = '\0';
	return (dest);
}
