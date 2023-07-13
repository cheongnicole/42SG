/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:55:41 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 14:16:40 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, \
	int (*cmp)(void *, void *), void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*cur;

	cur = *begin_list;
	while (cur)
	{
		if (cmp(cur->data, data_ref) != 0)
		{
			prev = cur;
			cur = cur->next;
		}
		else
		{
			if (cur == *begin_list)
				*begin_list = cur->next;
			else
				prev->next = cur->next;
			free_fct(cur);
			return ;
		}
	}
}
