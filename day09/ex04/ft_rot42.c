/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 20:37:13 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/08 12:54:25 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;
	char	rotate;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			rotate = str[i] - 97;
			rotate = ((rotate + 42) % 26) + 97;
			str[i] = rotate;
		}
		else if ((str[i] >= 65 && (str[i] <= 90)))
		{
			rotate = str[i] - 65;
			rotate = ((rotate + 42) % 26) + 65;
			str[i] = rotate;
		}
		i++;
	}
	return (str);
}
