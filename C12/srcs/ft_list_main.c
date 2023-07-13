/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:56:26 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 14:25:46 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	main(void)
{
	t_list	*begin_list;
	t_list	*begin_list2;
	t_list	*list;
	char	str1[128] = "first";
	char	str2[128] = "second";
	char	str3[128] = "third";
	char	str4[128] = "fourth";
	char	str5[128] = "fifth";
	char	*strings[5] = {str1, str2, str3, str4, str5};
	int	i;
	
	// ex00 ft_create_elem
	begin_list = ft_create_elem(str3);

	// ex01 ft_list_push_front
	printf("ex01: ft_list_push_front\n");
	ft_list_push_front(&begin_list, str2);
	ft_list_push_front(&begin_list, str1);
	print_list(begin_list);
	printf("\n");

	// ex02 ft_list_size
	printf("ex02: ft_list_size\n");
	printf("%d elements\n\n", ft_list_size(begin_list));

	// ex03 ft_list_last
	printf("ex03: ft_list_last\n");
	list = ft_list_last(begin_list);
	printf("%s\n\n", (char *)list->data);
	
	// ex04 ft_list_push_back
	printf("ex04: ft_list_push_back\n");
	ft_list_push_back(&begin_list, str4);
	ft_list_push_back(&begin_list, str5);
	print_list(begin_list);
	printf("\n");

	// ex05 ft_list_push_strs
	printf("ex05: ft_list_push_strs\n");
	begin_list2 = ft_list_push_strs(5, strings);
	print_list(begin_list2);
	printf("\n");

	// ex06 ft_list_clear
	printf("ex06: ft_list_clear: all clear\n\n");
	ft_list_clear(begin_list2, free);
	
	// ex07 ft_list_at
	printf("ex07: ft_list_at\n");
	i = -1;
	while (++i < 5)
	{
		list = ft_list_at(begin_list, i);
		if (list)
			ft_putstr(list->data);
	}
	printf("\n");
	
	// ex08 ft_list_reverse
	printf("ex08: ft_list_reverse\n");
	ft_list_reverse(&begin_list);
	printf("print iterative\n");
	print_list(begin_list);

	printf("reversing one more time\n");
	ft_list_reverse(&begin_list);
	printf("print recursive\n");
	print_list_recur(begin_list);
	printf("print recursive reverse\n");
	print_list_recur_reverse(begin_list);
	printf("\n");

	// ex09 ft_list_foreach
	printf("ex09: ft_list_foreach\n");
	ft_list_foreach(begin_list, (void (*)(void *))ft_putstr);
	printf("\n");

	// ex10 ft_list_foreach
	printf("ex10: ft_list_foreach_if\n");
	ft_list_foreach_if(begin_list, (void (*)(void *))ft_putstr, "first", (int (*)(void *, void *))ft_strcmp);
	ft_list_foreach_if(begin_list, (void (*)(void *))ft_putstr, "sixth", (int (*)(void *, void *))ft_strcmp);
	ft_list_foreach_if(begin_list, (void (*)(void *))ft_putstr, "fifth", (int (*)(void *, void *))ft_strcmp);
	printf("\n");

	// ex11 ft_list_find
	printf("ex11: ft_list_find\n");
	t_list  *found;
	found = ft_list_find(begin_list, "first", (int (*)(void *, void *))ft_strcmp);
	if (found)
		ft_putstr(found->data);
	found = ft_list_find(begin_list, "sixth", (int (*)(void *, void *))ft_strcmp);
	if (found)
		ft_putstr(found->data);
	found = ft_list_find(begin_list, "fifth", (int (*)(void *, void *))ft_strcmp);
	if (found)
		ft_putstr(found->data);
	printf("\n");

	// ex12 ft_list_remove_if
	printf("ex12: ft_list_remove_if\n");
	ft_list_remove_if(&begin_list, "sixth", (int (*)(void *, void *))ft_strcmp, free);
	print_list(begin_list);
	printf("\n");

	// ex13 ft_list_merge
	printf("ex13: ft_list_merge\n");
	begin_list2 = ft_list_push_strs(5, strings);
	ft_list_merge(&begin_list, begin_list2);
	print_list(begin_list);
	printf("\n");

	return (0);
}
