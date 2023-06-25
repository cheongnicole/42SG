/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:24:13 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 19:48:12 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[128];

	strcpy(str, "Hello World");
	printf("\nCase 1: B4 %s", str);
	printf(" After %s\n", ft_strupcase(str));
	strcpy(str, "He123 W@#$d");
	printf("\nCase 2: B4 %s", str);
	printf(" After %s\n", ft_strupcase(str));
	strcpy(str, "");
	printf("\nCase 3: B4 %s", str);
	printf(" After %s\n", ft_strupcase(str));
	return (0);
}
