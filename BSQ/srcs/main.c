/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:45:06 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/10 13:46:24 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static void	print_and_free(t_map *map)
{
	int	i;

	i = 0;
	while (map->tab[i])
	{
		write(1, map->tab[i], ft_strlen(map->tab[i]));
		free(map->tab[i]);
		i++;
	}
	free(map->tab);
	free(map);
}

void	ft_one_arg(void)
{
	char	*line;
	t_map	*map;

	line = get_line(0);
	map = first_line(line);
	if (map)
	{
		if (make_tab(0, map))
		{
			resolv(map);
			print_and_free(map);
		}
	}
}

int	main(int ac, char **av)
{
	char	*line;
	int		fd;
	t_map	*map;
	int		i;

	i = 1;
	if (ac == 1)
		ft_one_arg();
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		line = get_line(fd);
		map = first_line(line);
		if (map)
		{
			if (make_tab(fd, map))
			{
				resolv(map);
				print_and_free(map);
			}
		}
		i++;
		if (i != ac)
			write(1, "\n", 1);
		close(fd);
	}
	return (0);
}
