/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:55:07 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/06 17:16:16 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_compare_int(int a, int b);

int	main(void)
{
	/*
	int	tab[26] = {7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 4, \
		3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1};
		*/
	int	result;

	int	tab[10] = {-100, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	result = ft_is_sort(&tab[0], 10, &ft_compare_int);
	if (result)
		printf("table is sorted\n");
	else
		printf("table is not sorted\n");
	return (0);
}
