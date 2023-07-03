/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:36:46 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/21 18:10:14 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	counter;	

	counter = 0;
	while (counter < size / 2)
	{
		swap = tab[counter];
		tab[counter] = tab[size - counter - 1];
		tab[size - counter - 1] = swap;
		counter++;
	}
}
