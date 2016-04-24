/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 08:35:01 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/08 10:26:49 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*str_dup;
	int		str_dup_len;
	int		i;

	i = 0;
	str_dup_len = 0;
	while (str[str_dup_len])
		str_dup_len++;
	str_dup = (char *)malloc((str_dup_len + 1) * sizeof(char));
	while (str[i])
	{
		str_dup[i] = str[i];
		i++;
	}
	str_dup[str_dup_len] = '\0';
	return (str_dup);
}
