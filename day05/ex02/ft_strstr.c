/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 14:16:27 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/06 18:13:18 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_find_str_indx(char *str, int index, char *str_to_find)
{
	int	i;
	int	temp;
	int	found_index;

	while (str[index] != '\0')
	{
		if (str[index] == *str_to_find)
		{
			temp = index;
			i = 0;
			found_index = index;
			while (str_to_find[i] != '\0' && str[index] != '\0')
			{
				if(str_to_find[i] != str[index])
					found_index = -1;
				i++;
				index++;
			}
			if (found_index == -1)
				index = temp;
		}
		index++;
	}
	return (found_index);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*found_str;
	int		found_index;
	int		i;

	found_str = (char*)malloc(sizeof(found_str));
	found_index = ft_find_str_indx(str, 0, to_find);
	if (found_index != -1)
	{
		i = 0;
		while (str[found_index] != '\0')
		{
			found_str[i] = str[found_index];
			found_index++;
			i++;
		}
	}
	else
		found_str = NULL;
	return (found_str);
}
