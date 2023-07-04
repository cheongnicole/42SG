/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:36:51 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/04 17:14:26 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int));

int	ft_x10(int nb);

int	main(void)
{
	int	i;
	int	table[10];
	int	*ret_tab;

	i = 0;
	while (i < 10)
	{
		table[i] = i;
		i++;
	}
	ret_tab = ft_map(table, 10, &ft_x10);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", ret_tab[i]);
		i++;
	}
	free(ret_tab);
	return (0);
}
