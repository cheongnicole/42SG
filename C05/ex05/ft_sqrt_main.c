/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:12:11 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/03 10:44:37 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nbr[8];
	int	result[8];
	int	i = 0;

	nbr[0] = -1;
	result[0] = 0;
	nbr[1] = 0;
	result[1] = 0;
	nbr[2] = 1;
	result[2] = 1;
	nbr[3] = 2;
	result[3] = 0;
	nbr[4] = 13;
	result[4] = 0;
	nbr[5] = 4;
	result[5] = 2;
	nbr[6] = 100;
	result[6] = 10;
	nbr[7] = 2147395600;
	result[7] = 46340;
	nbr[8] = 2147483647;
	result[8] = 0;

	while (i < 9)
	{
		printf("\nSq Root of %d is %d: %d", nbr[i], result[i], ft_sqrt(nbr[i]));
		i++;
	}
	return (0);
}
