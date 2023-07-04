/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:55:07 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/04 21:23:32 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_compare_int(int a, int b);

int	main(void)
{
	int	tab[7];
	int	result;

	tab[0] = 0;
	tab[1] = 10;
	tab[2] = 10;
	tab[3] = 20;
	tab[4] = 30;
	tab[5] = 40;
	tab[6] = 40;

	result = ft_is_sort(&tab[0], 7, &ft_compare_int);
	if (result)
		printf("table is sorted\n");
	else
		printf("table is not sorted\n");
	return (0);
}
