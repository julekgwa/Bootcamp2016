/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 10:09:38 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/03 11:06:08 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display_char(int row, int col, int x, int y)
{
	if((row == 1) && (col == x || col == 1))
		ft_putchar('A');
	else if((row == y) && (col == x || col == 1))
		ft_putchar('C');
	else if((row == 1 && col == x) && (y != 1 && x > 1))
		ft_putchar('C');
	else if ((col < x && col > 1) && (row < y && row > 1))
		ft_putchar(' ');
	else
		ft_putchar('B');
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
