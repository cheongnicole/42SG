/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 08:11:54 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/29 08:20:34 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int nbr[8];
	int pow[8];
	int result[8];
	int i = 0;

	nbr[0] = 0;
	pow[0] = 1;
	result[0] = 0;
	nbr[1] = 1;
	pow[1] = 0;
	result[1] = 1;
	nbr[2] = 0;
	pow[2] = 0;
	result[2] = 1;
	nbr[3] = 4;
	pow[3] = 4;
	result[3] = 256;
	nbr[4] = -4;
	pow[4] = 3;
	result[4] = -64;
	nbr[5] = -1;
	pow[5] = 0;
	result[5] = 1;
	nbr[6] = 1;
	pow[6] = -4;
	result[6] = 0;

	while (i < 7)
	{
		printf("%d to the power of %d is %d: %d\n", nbr[i], pow[i],\
			result[i], ft_iterative_power(nbr[i], pow[i]));
		i++;
	}
	return (0);
}
