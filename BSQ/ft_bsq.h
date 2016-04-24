/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 16:41:01 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/21 16:41:04 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H
# define BUF_SIZE 1

int		count_cols(char *filename, int cols);
int		count_rows(char *filename);
int		fill_map(int **map, int fd, int row, int col);
int		**ft_create_map(char *filename, int nb_rows, int nb_cols);
int		min(int a, int b, int c);
void	ft_find_lrge_square(int **map, int max_of_s, int max_i, int max_j);
void	ft_frst_col_row(int **map, int **tmp_map, int rows, int cols);
void	fill_tmp_map(int **map, int **tmp_map, int rows, int cols);
void	ft_assign_max(int *max_of_s, int *max_i, int *max_j, int nbr);
void	ft_find_max(int **tmp_map, int *max_of, int rows, int cols);
int		**allocate_mem(int rows, int cols);
void	ft_putchar(char c);
void	ft_build_max_square(int **map, int rows, int cols);
void	ft_print_square(int **square, int rows, int cols);
int		ft_map_valid(char *filename, int cols, int fd);

#endif
