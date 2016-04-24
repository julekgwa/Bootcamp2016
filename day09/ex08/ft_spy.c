/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 06:34:55 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/08 14:09:49 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_equal(char *s1, char *s2)
{
	int	i;
	int	equal;
	int	j;

	i = 0;
	j = 0;
	equal = 0;
	while ((s1[i] != '\0') && (s2[j] != '\0'))
	{
		if ((s1[i] == s2[j]) && (s1[i + 1] == s2[j + 1] || s1[i + 1] == 32))
		{
			equal = 1;
		}
		else
			equal = 0;
		if (s1[i] == 32)
			j = -1;
		i++;
		j++;
	}
	return (equal);
}

void	ft_str_to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			temp = argv[i];
			ft_str_to_lower(temp);
			if (ft_str_is_equal(temp, "attack"))
				write(1, "Alert!!!", 8);
			else if (ft_str_is_equal(temp, "powers"))
				write(1, "Alert!!!", 8);
			else if (ft_str_is_equal(temp, "president"))
				write(1, "Alert!!!", 8);
			i++;
		}
	}
	return (0);
}
