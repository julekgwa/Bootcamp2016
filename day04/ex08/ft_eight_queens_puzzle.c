/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 17:02:05 by julekgwa          #+#    #+#             */
/*   Updated: 2016/04/05 17:02:16 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define N 8

void	ft_print(int board[N][N], int row, int col, int len)
{
	int i;
	int	b;

	i = row;
	while(i < len)
	{
		b = 0;
		while(b < len)
		{
			printf("%d", board[i][b]);
			b++;
		}
		printf("\n");
		i++;
	}
}

int	is_safe(int	board[N][N], int row, int col)
{
	int i, j;

	i = 0;
	while(i < col) //check left side
	{
		if(board[row][i] == 1)
			return (0);
		i++;
	}

	i = row;
	j = col;
	while(i >= 0 && j >= 0)
	{
		if(board[i][j] == 1)
			return (0);
		i--;
		j--;
	}

	i = row;
	j = col;
	while(j >= 0 && i < N)
	{
		if(board[i][j] == 1)
			return (0);
		i++;
		j--;
	}
	return (1);
}

int	solve_puzzle(int board[N][N], int col)
{
	int i = 0;
	while(i < N)
	{
		if (is_safe(board, i, col))
		{
			board[i][col] = 1;
			if(solve_puzzle(board,col + 1))
				return (1);
			board[i][col] = 0;
		}
		i++;
	}
	return (0);
}

int solveNQUtil(int board[N][N], int col)
{
    if (col >= N)
        return 1;
 
    
    for (int i = 0; i < N; i++)
    {
        
        if ( is_safe(board, i, col) )
        {
                        board[i][col] = 1;
 
            
            if ( solveNQUtil(board, col + 1) )
                return 1;
 
            board[i][col] = 0;
        }
    }
 
    return 0;
}

int main(int argc, char const *argv[])
{
	int board[N][N] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
 
	int test[N][N] = {{0,1,0,0}, {0,0,0,0},{0,0,0,0},{0,0,0,0}};
	solve_puzzle(test,0);
	solveNQUtil(board,0);
	ft_print(test,0,0,N);
	return 0;
}
