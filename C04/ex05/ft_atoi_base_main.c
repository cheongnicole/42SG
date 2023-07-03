/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 01:16:38 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/29 07:15:14 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("\"-10000000000000000000000000000000\" in radix \"01\" should be\
	-2147483648: %d\n", ft_atoi_base("-10000000000000000000000000000000", "01"));
	printf("\"   ---+--+1234ab567\" in radix \"0123456789\" should be\
	-1234: %d\n", ft_atoi_base("   ---+--+1234ab567", "0123456789"));
	printf("\"   ---+--+10011010010\" in radix \"01\" should be\
	-1234: %d\n", ft_atoi_base("   ---+--+10011010010", "01"));
	printf("\"   ---+--+4D2ab567\" in radix \"0123456789ABCDEF\" should be\
	-1234: %d\n", ft_atoi_base("   ---+--+4D2ab567", "0123456789ABCDEF"));
	printf("\"   ---+--+nennab567\" in radix \"poneyvif\" should be\
	-1234: %d\n", ft_atoi_base("   ---+--+nennab567", "poneyvif"));
	return (0);
}
