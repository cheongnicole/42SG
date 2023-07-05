/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 06:15:01 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/06 06:27:51 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putlnbr(long lnbr)
{
	if (lnbr < 0)
	{
		write(1, "-", 1);
		ft_putlnbr(lnbr * -1);
	}
	else if (lnbr > 9)
	{
		ft_putlnbr(lnbr / 10);
		ft_putlnbr(lnbr % 10);
	}
	else
		write(1, &"0123456789"[lnbr], 1);
}
