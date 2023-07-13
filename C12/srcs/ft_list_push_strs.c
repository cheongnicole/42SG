/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:12:14 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 07:51:06 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*begin_list;

	if (strs[0])
		begin_list = ft_create_elem(strs[0]);
	i = 0;
	while (++i < size && strs[i])
		ft_list_push_front(&begin_list, strs[i]);
	return (begin_list);
}
