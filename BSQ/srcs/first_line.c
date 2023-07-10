/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:47:58 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/10 11:55:48 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// Process the first_line of map, e.g. 9.ox
t_map	*first_line(char *str)
{
	int		size;
	t_map	*x;

	x = (t_map *)malloc(1 * sizeof(t_map));
	if (!str || !x)
		return (ft_error());
	size = ft_strlen(str);
	if (size < 5)
	{
		free(x);
		return (ft_error());
	}
	x->empty = str[size - 4];
	x->obstacle = str[size - 3];
	x->full = str[size - 2];
	x->line_nbr = ft_atoi(str, (size - 4));
	if ((x->empty == x->obstacle) || (x->empty == x->full) || \
		(x->obstacle == x->full) || (x->line_nbr < 1))
	{
		free(x);
		return (ft_error());
	}
	free(str);
	return (x);
}
