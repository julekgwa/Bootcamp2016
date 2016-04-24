/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/06 16:34:40 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/06 18:17:21 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		else if (i > 0)
		{
			if ((str[i] >= 97 && str[i] <= 122) && (str[i - 1] == 32))
				str[i] = str[i] - 32;
			else if ((str[i - 1] >= 33 && str[i - 1] <= 47) && str[i] != 32)
				str[i] = str[i] - 32;
			else if ((str[i - 1] >= 58 && str[i - 1] <= 64) && str[i] != 32)
				str[i] = str[i] - 32;
			else if ((str[i - 1] >= 91 && str[i - 1] <= 96) && str[i] != 32)
				str[i] = str[i] - 32;
			else if ((str[i - 1] >= 123 && str[i - 1] <= 127) && str[i] != 32)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
