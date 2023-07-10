/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 08:23:09 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/10 08:42:50 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	print_result(int board[10][10])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (board[i][j] == 1)
			{
				c = '0' + j;
				write(1, &c, 1);
				j = 10;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

void	move_queen(int board[10][10], int row, int col)
{
	int	i;
	int	j;

	if (board[row][col] == 0)
		i = -1;
	else
		i = 1;
	j = 0;
	while (j < 10)
	{
		board[row][j] += i;
		board[j][col] += i;
		if (row - j >= 0 && col - j >= 0)
			board[row - j][col - j] += i;
		if (row + j < 10 && col + j < 10)
			board[row + j][col + j] += i;
		if (row - j >= 0 && col + j < 10)
			board[row - j][col + j] += i;
		if (row + j < 10 && col - j >= 0)
			board[row + j][col - j] += i;
		j++;
	}
	if (i == 1)
		board[row][col] = 0;
	else
		board[row][col] = 1;
}

void	solve(int board[10][10], int *nb_results, int row)
{
	int	i;

	i = 0;
	if (row == 10)
	{
		*nb_results = *nb_results + 1;
		print_result(board);
	}
	else
	{
		while (i < 10)
		{
			if (board[row][i] == 0)
			{
				move_queen(board, row, i);
				solve(board, nb_results, row + 1);
				move_queen(board, row, i);
			}
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		i;
	int		j;
	int		board[10][10];

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	solve(board, &i, 0);
	return (i);
}
