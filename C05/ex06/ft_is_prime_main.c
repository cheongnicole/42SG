/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:53:27 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/29 16:00:01 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	nbr[8];
	int	i = 0;

	nbr[0] = -1;
	nbr[1] = 0;
	nbr[2] = 1;
	nbr[3] = 2;
	nbr[4] = 13;
	nbr[5] = 4;
	nbr[6] = 100;
	nbr[7] = 1151;

	while (i < 8)
	{
		printf("\n %d is ", nbr[i]);
		if (!ft_is_prime(nbr[i]))
			printf("not ");
		printf("prime!");
		i++;
	}
	return (0);
}
