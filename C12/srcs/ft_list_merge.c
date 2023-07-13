/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:16:55 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 14:31:48 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*ptr;

	ptr = *begin_list1;
	while (ptr->next)
		ptr = ptr->next;
	if (ptr == NULL)
		*begin_list1 = begin_list2;
	else
		ptr->next = begin_list2;
}
