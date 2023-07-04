/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:58:59 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/04 17:01:46 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = (int *)malloc((max - min) * sizeof(int));
	if (dest)
	{
		while (i != (max - min))
		{
			dest[i] = min + i;
			i++;
		}
	}
	*range = dest;
	return (i);
}
