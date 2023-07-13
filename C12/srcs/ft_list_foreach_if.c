/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:14:04 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 12:40:48 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), \
	void *data_ref, int (*cmp)(void *, void *))
{
	t_list	*ptr;

	ptr = begin_list;
	while (ptr)
	{
		if (cmp(ptr->data, data_ref) == 0)
			f(ptr->data);
		ptr = ptr->next;
	}
}
