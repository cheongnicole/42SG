/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 06:49:12 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/06 18:58:01 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	op_add(int val1, int val2)
{
	ft_putnbr(val1 + val2);
	ft_putchar('\n');
}

void	op_sub(int val1, int val2)
{
	ft_putnbr(val1 - val2);
	ft_putchar('\n');
}

void	op_mul(int val1, int val2)
{
	ft_putnbr(val1 * val2);
	ft_putchar('\n');
}

void	op_div(int val1, int val2)
{
	if (val2 == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(val1 / val2);
	ft_putchar('\n');
}

void	op_mod(int val1, int val2)
{
	if (val2 == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(val1 % val2);
	ft_putchar('\n');
}
