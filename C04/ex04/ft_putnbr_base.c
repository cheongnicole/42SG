/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 23:35:06 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/29 06:45:22 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// radix is invalid if
// empty or size 1
// contains + or -
// contains the same character twice
// returns the radix number
int	check_radix(char *radix)
{
	int	i;
	int	j;

	if (!radix[0] || !radix[1])
		return (0);
	i = 0;
	j = 0;
	while (radix[i])
	{
		if (radix[i] == '+' || radix[i] == '-')
			return (0);
		j = i + 1;
		while (radix[j])
		{
			if (radix[i] == radix[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

// cast to long to cater for smallest negative number
void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;
	long	lnbr;

	radix = check_radix(base);
	lnbr = nbr;
	if (!radix)
		return ;
	else
	{
		if (lnbr < 0)
		{
			write(1, "-", 1);
			lnbr *= -1;
		}
		if (lnbr < radix)
			write(1, &base[lnbr], 1);
		else
		{
			ft_putnbr_base(lnbr / radix, base);
			ft_putnbr_base(lnbr % radix, base);
		}
	}
}
