/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:02:36 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 08:01:19 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*cur;

	while (begin_list->next)
	{
		cur = begin_list;
		begin_list = cur->next;
		(*free_fct)(cur);
	}
	(*free_fct)(begin_list);
}
