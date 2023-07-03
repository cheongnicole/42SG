/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:53:27 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/03 11:58:01 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	nbr[8];
	int	result[8];
	int	i = 0;

	nbr[0] = -1;
	result[0] = 2;
	nbr[1] = 0;
	result[1] = 2;
	nbr[2] = 1;
	result[2] = 2;
	nbr[3] = 2;
	result[3] = 2;
	nbr[4] = 13;
	result[4] = 13;
	nbr[5] = 4;
	result[5] = 5;
	nbr[6] = 100;
	result[6] = 101;
	nbr[7] = 1151;
	result[7] = 1151;

	while (i < 8)
	{
		printf("\n %d next prime is %d: ", nbr[i], result[i]);
		printf("%d", ft_find_next_prime(nbr[i]));
		i++;
	}
	return (0);
}
