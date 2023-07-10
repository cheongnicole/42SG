/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:36:23 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/10 14:46:41 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	free_tab(char **tab, int i, int err)
{
	while (i >= 0 && tab[i])
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	if (err)
		write(1, "map error\n", 10);
	return (0);
}

int	ft_atoi(char *str, int j)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9' && j)
	{
		result = result * 10 + (str[i] - '0');
		i++;
		j--;
	}
	return (result);
}

void	*ft_error(void)
{
	write(1, "map error\n", 10);
	return (NULL);
}

int	ft_int_error(void)
{
	write(1, "map error\n", 10);
	return (0);
}
