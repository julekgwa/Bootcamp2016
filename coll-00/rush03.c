/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanheer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/06 10:56:01 by jvanheer          #+#    #+#             */
/*   Updated: 2016/04/03 10:14:39 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_display_char(int row, int col, int x, int y)
{
	if((row == 1 && col == 1) || (row == y && col == 1))
		ft_putchar('A');
	else if(col == x && row == y)
		ft_putchar('C');
	else if((row == 1 && col == x)&& (y != 1 && x > 1))
		ft_putchar('C');
	else if((col < x && col > 1) && (row < y && row > 1))
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	if(x > 0 && y > 0)
	{
		while(row <= y)
		{
			col = 1;
			while(col <= x)
			{
				ft_display_char(row, col, x ,y);
				col++;
			}
			row++;
			ft_putchar('\n');
		}
	}
}
