/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 23:50:56 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/08 19:01:51 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i + 1])
	{
		j = i + 1;
		while (tab[j])
		{
			if ((*cmp)(tab[j], tab[i]) <= 0)
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
	}
}
