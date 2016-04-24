/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 18:32:03 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/07 18:42:19 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*tmp;
	int		find;
	int		i;

	find = 1;
	while (find < argc)
	{
		i = 1;
		while (i < argc)
		{
			if ((i + 1) < argc)
			{
				if (argv[i] < argv[i + 1])
				{
					tmp = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = tmp;
				}
			}
			i++;
		}
		find++;
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]), ft_putchar('\n');
	return (0);
}
