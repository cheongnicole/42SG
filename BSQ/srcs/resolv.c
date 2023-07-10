/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:00:15 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/10 14:38:23 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static t_square	init_square(int y, int x, int size)
{
	t_square	square;

	square.pos_x = x;
	square.pos_y = y;
	square.size = size;
	return (square);
}

static int	calc_size_square(int y, int x, t_map map, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		if (y + size >= map.line_nbr || map.tab[y + size][x + i] != map.empty)
			return (size);
		if (y + i >= map.line_nbr || map.tab[y + i][x + size] != map.empty)
			return (size);
		i++;
	}
	return (calc_size_square(y, x, map, size + 1));
}

static void	modif_map(t_square square, t_map *map)
{
	int	i;
	int	j;

	j = 0;
	while (j <= square.size)
	{
		i = 0;
		while (i <= square.size)
		{
			map->tab[square.pos_y + j][square.pos_x + i] = map->full;
			i++;
		}
		j++;
	}
}

void	resolv(t_map *map)
{
	int			x;
	int			y;
	t_square	square;
	int			tmp;

	square = init_square(0, 0, -1);
	y = 0;
	while (y < map->line_nbr - square.size)
	{
		x = 0;
		while (x < map->line_size - square.size)
		{
			tmp = calc_size_square(y, x, *map, 0);
			if (tmp > square.size)
				square = init_square(y, x, tmp);
			x++;
		}
		y++;
	}
	square.size--;
	modif_map(square, map);
}
