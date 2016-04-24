/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 09:25:40 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/08 11:03:59 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size_of_argv_char(int argc, char **argv)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		total_size_param;
	char	*new_str;

	i = 0;
	k = 0;
	total_size_param = ft_size_of_argv_char(argc, argv);
	new_str = (char *)malloc(sizeof(*new_str * (total_size_param + argc - 1)));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			new_str[k] = argv[i][j];
			k++;
			j++;
		}
		new_str[k] = '\n';
		k++;
		i++;
	}
	new_str[k] = '\0';
	return (new_str);
}
