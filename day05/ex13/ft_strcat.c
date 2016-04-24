/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 07:44:21 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/06 18:19:30 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
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
	while (src[j] != '\0')
	{
		dest[dest_len] = src[j];
		dest_len++;
		j++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
