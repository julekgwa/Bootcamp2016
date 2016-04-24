/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 12:47:10 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/04 14:13:11 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	temp;

	len = 0;
	i = 0;
	while(str[i] != '\0')
	{
		len += 1;
		i++;
	}

	i = 0;
	len -= 1;
	while( i <= len)
	{
		temp  = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}
