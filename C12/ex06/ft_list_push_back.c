/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:55:42 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/09 01:01:29 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*cur;

	cur = *begin_list;
	while (cur->next != NULL)
		cur = cur->next;
	new = ft_create_elem(data);
	if (new)
		cur->next = new;
}
