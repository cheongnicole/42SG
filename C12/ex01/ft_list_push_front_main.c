/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:50:02 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/09 22:20:40 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	main(void)
{
	t_list	*list;
	char	*str1 = "first";
	char	*str2 = "second";
	char	*str3 = "third";
	
	list = ft_create_elem(str1);
	ft_list_push_front(&list, str2);
	ft_list_push_front(&list, str3);
	while (list->next != NULL)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
	printf("%s\n", (char *)list->data);
	return (0);
}
