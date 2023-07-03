/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 01:15:49 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/29 06:58:52 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// removes leading spaces and checks the signs
// sets start to the first numeric
// returns the sign
int	strip_spaces_signs(char *str, int *start)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*start = i;
	return (sign);
}

// translate the base character to integer
// returns -1 if not found
int	translate_base(char c, int radix, char *base)
{
	int	i;

	i = 0;
	while (i < radix)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	long	result;
	int	radix;
	int	index;

	radix = check_radix(base);
	if (!radix)
		return (0);
	result = 0;
	sign = strip_spaces_signs(str, &i);
	index = translate_base(str[i], radix, base);
	while (index != -1)
	{
		result *= radix;
		result += index;
		i++;
		index = translate_base(str[i], radix, base);
	}
	result *= sign;
	return (result);
}
