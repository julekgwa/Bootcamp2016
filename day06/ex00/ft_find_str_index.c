/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_str_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 16:03:56 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/07 16:04:43 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_str_indx(char *str, int index, char *str_to_find)
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
				if (str_to_find[i] != str[index])
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
