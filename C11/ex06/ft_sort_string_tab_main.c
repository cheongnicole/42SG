/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 23:24:25 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/05 23:47:38 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(void)
{
	int i = 0;
	char *tab[10];

	tab[0] = "first 2";
	tab[1] = "second 4";
	tab[2] = "third 6";
	tab[3] = "fourth 3";
	tab[4] = "fifth 1";
	tab[5] = "six 5";
	tab[6] = NULL;

	ft_sort_string_tab(tab);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
