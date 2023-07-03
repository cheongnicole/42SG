/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:02:18 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/03 15:03:23 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*int_arr;
	int	size;
	int	i;

	min = 3;
	max = 7;
	size = ft_ultimate_range(&int_arr, min, max);
	i = 0;
	while (i < size)
	{
		printf("%d ", int_arr[i]);
		i++;
	}
	free(int_arr);
	return (0);
}
