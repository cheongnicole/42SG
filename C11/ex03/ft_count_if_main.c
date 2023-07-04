/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:55:07 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/04 20:05:40 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int	ft_count_if(char **tab, int length, int(*f)(char*));

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*strings[10];
	int	result;

	strings[0] = strdup("12345");
	strings[1] = strdup("Hello");
	strings[2] = strdup("World");
	strings[3] = strdup("TODAY");

	result = ft_count_if(strings, 4, &ft_str_is_alpha);
	printf("(3) %d strings are alpha\n", result);
	return (0);
}
