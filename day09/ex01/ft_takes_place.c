/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 19:41:37 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/08 12:47:00 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		e_hour;
	char	am;
	char	pm;

	e_hour = hour + 1;
	am = 'A';
	pm = 'A';
	if (hour == 23)
		e_hour = 0;
	if (hour <= 23)
	{
		if (hour >= 12 && hour <= 23)
		{
			am = 'P';
			pm = 'P';
			hour = hour % 12;
			e_hour = e_hour % 12;
		}
		if (e_hour == 0)
			pm = 'A';
		if (e_hour == 12)
			pm = 'P';
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 %c.M. AND %d.00 %c.M.", hour, am, e_hour, pm);
	}
}
