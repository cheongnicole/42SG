/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:58:27 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/04 19:19:26 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int	ft_any(char **tab, int(*f)(char*));

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*strings[10];
	int	result;

	strings[0] = strdup("12345");
	/*
	strings[1] = strdup("Hello");
	strings[2] = strdup("World");
	*/
	strings[1] = NULL;

	result = ft_any(strings, &ft_str_is_alpha);
	if (result)
		printf("At least one string is alpha\n");
	else
		printf("No alpha strings found\n");
	return (0);
}
