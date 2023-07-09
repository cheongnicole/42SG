/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 22:33:53 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/09 22:39:09 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	main(void)
{
	t_list	*begin_list;
	t_list	*list;
	char	*str1 = "first";
	char	*str2 = "second";
	char	*str3 = "third";
	
	begin_list = ft_create_elem(str1);
	ft_list_push_front(&begin_list, str2);
	ft_list_push_front(&begin_list, str3);
	list = begin_list;
	while (list->next != NULL)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
	printf("%s\n", (char *)list->data);
	printf("%d elements\n", ft_list_size(begin_list));
	return (0);
}
