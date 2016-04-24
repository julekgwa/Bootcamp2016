/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/16 15:02:53 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/17 17:32:56 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_EXPR_H
# define FT_EVAL_EXPR_H

typedef struct		s_node
{
	int				top;
	unsigned	int	capacity;
	int				*array;
}					t_node;

int					ft_is_number(char c);
int					ft_strlen(char *str);
t_node				*ft_create_stack(int size);
void				ft_push(t_node *stack, char c);
char				ft_peek(t_node *stack);
void				ft_putchar(char c);
void				ft_putnbr(int n);
int					ft_is_empty(t_node *stack);
char				ft_pop(t_node *stack);

#endif
