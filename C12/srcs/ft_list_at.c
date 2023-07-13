/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:41:16 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 08:02:11 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*cur;
	unsigned int	i;

	if (nbr == 0)
		return (begin_list);
	i = 1;
	cur = begin_list;
	while (i <= nbr && cur->next)
	{
		cur = cur->next;
		i++;
	}
	if (nbr >= i)
		return (NULL);
	return (cur);
}
