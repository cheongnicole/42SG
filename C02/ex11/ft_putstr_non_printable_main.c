/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable_main.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:06:34 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 22:28:03 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_putstr_non_printable(char *str);

int	main(void)
{
	char	str[128];

	strcpy(str, "hello world");
	printf("\nCase 1: B4 %s After\n", str);
	ft_putstr_non_printable(str);
	strcpy(str, "Coucou\ntu vas bien ?");
	printf("\nCase 2: B4 %s After\n", str);
	ft_putstr_non_printable(str);
	strcpy(str, "");
	printf("\nCase 3: B4 %s After\n", str);
	printf(" After ");
	ft_putstr_non_printable(str);
	return (0);
}
