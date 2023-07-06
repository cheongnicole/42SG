/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:08:51 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/06 17:11:16 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sort_asc(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < length)
	{
		while (j < length)
		{
			if (f(tab[i], tab[j]) > 0)
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	sort_desc(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < length)
	{
		while (j < length)
		{
			if (f(tab[i], tab[j]) < 0)
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (tab[0] < tab[1])
		return (sort_asc(tab, length, f));
	else
		return (sort_desc(tab, length, f));
	return (1);
}
