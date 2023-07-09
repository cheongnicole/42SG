/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:33:50 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/06 20:37:34 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	main(void)
{
	t_list	*new;
	char	str[] = "My new t_list";
	
	new = ft_create_elem(str);
	printf("%s\n", (char *)new->data);
	return (0);
}
