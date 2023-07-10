/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:18:40 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/10 16:20:14 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static int	check_line(t_map *map, int i, int fd)
{
	int	j;

	j = 0;
	if (!map->tab[i] || map->tab[i][0] == '\n')
		return (0);
	while (map->tab[i][j] && map->tab[i][j] != '\n')
	{
		if (map->tab[i][j] != map->empty && map->tab[i][j] != map->obstacle)
			return (0);
		j++;
	}
	if (j != map->line_size - 1)
		return (0);
	if (map->tab[i][j] != '\n' && i != map->line_nbr - 1 && fd)
		return (0);
	return (1);
}

static int	check_first_line(t_map *map, int fd)
{
	map->tab[0] = get_line(fd);
	map->line_size = ft_strlen(map->tab[0]);
	if (!(check_line(map, 0, fd)))
	{
		if (!map->tab[0])
			free_tab(map->tab, -1, 0);
		else
			free_tab(map->tab, 0, 0);
		return (0);
	}
	return (1);
}

int	make_tab(int fd, t_map *map)
{
	int		i;
	char	c;

	map->tab = (char **)malloc((map->line_nbr + 1) * sizeof(char *));
	if (!(map->tab) || !(check_first_line(map, fd)))
		return (ft_int_error());
	i = 1;
	while (i < map->line_nbr)
	{
		map->tab[i] = get_full_line(fd, map->line_size);
		if (!check_line(map, i, fd))
		{
			if (!(map->tab[i]))
				i--;
			free_tab(map->tab, i, 0);
			return (ft_int_error());
		}
		i++;
	}
	map->tab[i] = NULL;
	if (fd && read(fd, &c, 1) >= 1)
		return (free_tab(map->tab, i - 1, 1));
	return (1);
}
