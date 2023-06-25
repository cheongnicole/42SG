/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:17:15 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 19:14:41 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;

	str = "Hello World!";
	printf("\nCase 1: %s", str);
	if (ft_str_is_printable(str))
		printf("is printable\n");
	else
		printf("is not printable\n");
	str = "\n \r";
	printf("\nCase 2: %s", str);
	if (ft_str_is_printable(str))
		printf("is printable\n");
	else
		printf("is not printable\n");
	str = "";
	printf("\nCase 3: %s", str);
	if (ft_str_is_printable(str))
		printf("is printable\n");
	else
		printf("is not printable\n");
	return (0);
}
