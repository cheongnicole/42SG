/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:09:22 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/29 09:21:53 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int idx[8];
	int result[8];
	int i = 0;

	idx[0] = 0;
	result[0] = 0;
	idx[1] = 1;
	result[1] = 1;
	idx[2] = 2;
	result[2] = 1;
	idx[3] = 3;
	result[3] = 2;
	idx[4] = 4;
	result[4] = 3;
	idx[5] = 5;
	result[5] = 5;
	idx[6] = 6;
	result[6] = 8;
	idx[7] = 7;
	result[7] = 13;
	idx[8] = 8;
	result[8] = 21;
	idx[9] = 9;
	result[9] = 34;
	idx[10] = 10;
	result[10] = 55;

	while (i < 11)
	{
		printf("Index %d is %d: %d\n", idx[i], result[i],\
			ft_fibonacci(idx[i]));
		i++;
	}
	return (0);
}
