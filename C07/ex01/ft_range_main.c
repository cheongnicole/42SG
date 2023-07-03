/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:40:00 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/29 20:12:41 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*int_arr;
	int	i;

	min = 3;
	max = 7;
	int_arr = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", int_arr[i]);
		i++;
	}
	free(int_arr);
	return (0);
}
