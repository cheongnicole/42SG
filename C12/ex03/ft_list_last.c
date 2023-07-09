/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:48:37 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/09 00:50:29 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	int		i;
	t_list	*cur;

	if (begin_list == NULL)
		return (0);
	i = 1;
	cur = begin_list;
	while (cur->next != NULL)
	{
		cur = cur->next;
		i++;
	}
	return (cur);
}
