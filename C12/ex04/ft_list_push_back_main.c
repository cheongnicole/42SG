/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:45:03 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/11 14:58:55 by ncheong          ###   ########.fr       */
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
	
	// ex00 ft_create_elem
	begin_list = ft_create_elem(str1);

	// ex01 ft_list_push_front
	ft_list_push_front(&begin_list, str2);
	ft_list_push_front(&begin_list, str3);
	list = begin_list;
	while (list->next != NULL)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
	printf("%s\n", (char *)list->data);

	// ex02 ft_list_size
	printf("%d elements\n", ft_list_size(begin_list));

	// ex03 ft_list_last
	list = ft_list_last(begin_list);
	printf("%s\n", (char *)list->data);
	
	// ex04 ft_list_push_back
	char	*str4 = "fourth";
	ft_list_push_back(&begin_list, str4);
	list = begin_list;
	while (list->next != NULL)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
	printf("%s\n", (char *)list->data);

	return (0);
}
