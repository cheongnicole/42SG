/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 23:35:40 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/29 06:52:01 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//int     check_radix(char *radix);
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	printf("750303 in radix \"0123456789\" should be 750303: \n");
	ft_putnbr_base(750303, "0123456789");

	printf("\n-2147483648 in radix \"01\" should be -10000000000000000000000000000000: \n");
	ft_putnbr_base(-2147483648, "01");
	printf("\n-2147483647 in radix \"01\" should be -1111111111111111111111111111111: \n");
	ft_putnbr_base(-2147483647, "01");
	printf("\n303 in radix \"01\" should be 100101111: \n");
	ft_putnbr_base(303, "01");
	printf("\n303 in radix \"poneyvif\" should be yvf: \n");
	ft_putnbr_base(303, "poneyvif");
	printf("\n-303 in radix \"0123456789ABCDEF\" should be -12F: \n");
	ft_putnbr_base(-303, "0123456789ABCDEF");
	return (0);
}
