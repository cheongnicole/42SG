/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:11:30 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/04 16:12:53 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int nb);

int	main(void)
{
	int	i;
	int	table[10];

	i = 0;
	while (i < 10)
	{
		table[i] = i;
		i++;
	}
	ft_foreach(table, 10, &ft_putnbr);
	return (0);
}
