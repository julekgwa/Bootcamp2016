/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/17 12:33:05 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/17 17:44:47 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"
#include <stdlib.h>

int			eval_expre(char *str)
{
	int i;
	int j;
	int k;
	t_node	*cal;

	cal = ft_create_stack(ft_strlen(str));
	i = 0;
	j = 0;
	k = 0;
	if (!cal)
		return (-1);
	while (str[i])
	{
		if (ft_is_number(str[i]))
			ft_push(cal, str[i] - '0');
		else
		{
			j = ft_pop(cal);
			k = ft_pop(cal);
			if (str[i] == '+')
				ft_push(cal, k + j);
			else if (str[i] == '*')
				ft_push(cal, j * k);
			else if (str[i] == '/')
				ft_push(cal, j / k);
			else if (str[i] == '-')
				ft_push(cal, j - k);
			else if (str[i] == '%')
				ft_push(cal, j % k);
		}
		i++;
	}
	return (ft_pop(cal));
}

int			ft_order_prece(char ch)
{
	if (ch == '+' || ch == '-')
		return (1);
	else if (ch == '*' || ch == '/' || ch == '%')
		return (1);
	else if (ch == '^')
		return (3);
	return (-1);
}

void		ft_remove_spaces(char *str)
{
	char	*dest;
	char	*src;

	dest = str;
	src = str;
	while (*src != '\0')
	{
		*dest = *src++;
		if (*src == ' ')
			dest++;
	}
	dest = 0;
}

int			ft_infix_to_postfix(char *exp)
{
	int		i;
	int		k;
	t_node	*stack;

	i = 0;
	k = -1;
	ft_remove_spaces(exp);
	stack = ft_create_stack(ft_strlen(exp));
	if (!stack)
		return (-1);
	while (exp[i])
	{
		if (ft_is_number(exp[i]))
			exp[++k] = exp[i];
		else if (exp[i] == '(')
			ft_push(stack, exp[i]);
		else if (exp[i] == ')')
		{
			while (!ft_is_empty(stack) && ft_peek(stack) != '(')
				exp[++k] = ft_pop(stack);
			if (!ft_is_empty(stack) && ft_peek(stack) != '(')
				return (-1);
			else
				ft_pop(stack);
		}
		else
		{
			while (!ft_is_empty(stack) && ft_order_prece(exp[i]) <= ft_order_prece(ft_peek(stack)))
				exp[++k] = ft_pop(stack);
			ft_push(stack, exp[i]);
		}
		i++;
	}
	while (!ft_is_empty(stack))
		exp[++k] = ft_pop(stack);
	exp[++k] = '\0';
	return (0);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expre(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
