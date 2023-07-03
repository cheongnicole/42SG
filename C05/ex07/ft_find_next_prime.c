/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:45:32 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/03 10:45:34 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	if (!(nb % 2) || !(nb % 3) || !(nb % 5))
		return (0);
	i = 3;
	while (nb % i != 0 && i <= nb / 2)
		i += 2;
	if (i > nb / 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	i = nb;
	if (!(nb % 2))
		i += 1;
	while (i <= 2147483647)
	{
		if (ft_is_prime(i))
			return (i);
		else
			i += 2;
	}
	return (0);
}
