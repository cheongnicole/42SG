/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:25:47 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/04 13:55:59 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// checks for valid radix and returns its number
int		check_radix(char *radix);

// translate the string to integer according to base
long	ft_atoi_base(char *str, char *base);

// standard strdup
char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(i);
	if (!dest)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// converts number to the new base string
// long to cater for smallest negative number
char	*ft_putnbr_base(long lnbr, char *base)
{
	char	buffer[34];
	int		radix;
	int		i;
	int		sign;

	radix = check_radix(base);
	buffer[33] = '\0';
	i = 32;
	if (lnbr < 0)
	{
		sign = -1;
		lnbr *= -1;
	}
	while (lnbr / radix)
	{
		buffer[i] = base[lnbr % radix];
		i--;
		lnbr /= radix;
	}
	buffer[i] = base[lnbr];
	if (sign == -1)
		i--;
	if (sign == -1)
		buffer[i] = '-';
	return (ft_strdup(&buffer[i]));
}

// converts string from one base to another
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	lnbr;
	char	*result;

	if (!check_radix(base_from) || !check_radix(base_to))
		return (NULL);
	lnbr = ft_atoi_base(nbr, base_from);
	result = ft_putnbr_base(lnbr, base_to);
	return (result);
}
