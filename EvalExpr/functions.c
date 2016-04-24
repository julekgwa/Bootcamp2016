/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/17 17:30:43 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/17 17:30:58 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"
#include <stdlib.h>

t_node	*ft_create_stack(int size)
{
	t_node	*stack;

	stack = (t_node *)malloc(sizeof(t_node));
	if (stack)
	{
		stack->top = -1;
		stack->capacity = size;
		stack->array = (int *)malloc(sizeof(int) * size);
	}
	return (stack);
}

void	ft_push(t_node *stack, char c)
{
	stack->array[++stack->top] = c;
}

char	ft_pop(t_node *stack)
{
	return (stack->array[stack->top--]);
}

char	ft_peek(t_node *stack)
{
	return (stack->array[stack->top]);
}

int		ft_is_empty(t_node *stack)
{
	return (stack->top == -1);
}
