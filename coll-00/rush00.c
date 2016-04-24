/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 10:05:35 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/03 10:38:46 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display_char(int row, int col, int x, int y)
{
	if((row == 1 || row == y) && (col == 1 || col == x))
		ft_putchar('o');
	else if(((row == 1) || (row == y)))
		ft_putchar('-');
	else if((row != 1 || row != y) && (col == 1 || col == x))
		ft_putchar('|');
	else if((row != 1 && row != y) && (col != x))
		ft_putchar(' ');
}

void	rush(int x,int y)
{
	int	row;
	int	col;

	row = 1;
	if(x > 0 && y > 0)
	{
		while(row <= y)
		{
			col = 1;
			while(col <= x)
			{
				ft_display_char(row, col, x, y);
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
