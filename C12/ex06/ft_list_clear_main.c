/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:05:21 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/11 18:23:45 by ncheong          ###   ########.fr       */
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
	char	*str4 = "fourth";
	char	*strings[4] = {str1, str2, str3, str4};
	
	// ex00 ft_create_elem
	begin_list = ft_create_elem(str1);

	// ex01 ft_list_push_front
	printf("ex01: ft_list_push_front\n");
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
	printf("ex02: ft_list_size\n");
	printf("%d elements\n", ft_list_size(begin_list));

	// ex03 ft_list_last
	printf("ex03: ft_list_last\n");
	list = ft_list_last(begin_list);
	printf("%s\n", (char *)list->data);
	
	// ex04 ft_list_push_back
	printf("ex04: ft_list_push_back\n");
	ft_list_push_back(&begin_list, str4);
	list = begin_list;
	while (list->next != NULL)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
	printf("%s\n", (char *)list->data);

	// ex05 ft_list_push_strs
	printf("ex05: ft_list_push_strs\n");
	list = ft_list_push_strs(4, strings);
	while (list->next != NULL)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
	printf("%s\n", (char *)list->data);

	// ex06 ft_list_clear
	printf("ex06: ft_list_clear: all clear\n");
	ft_list_clear(list, free);

	return (0);
}
