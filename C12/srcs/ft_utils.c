/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:43:28 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 12:35:26 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	print_list(t_list *ptr)
{
	while (ptr != NULL)
	{
		printf("%s\n", (char *)ptr->data);
		ptr = ptr->next;
	}
}

void	print_list_recur(t_list *ptr)
{
	if (ptr == NULL)
		return ;
	printf("%s\n", (char *)ptr->data);
	print_list_recur(ptr->next);
}

void	print_list_recur_reverse(t_list *ptr)
{
	if (ptr == NULL)
		return ;
	print_list_recur_reverse(ptr->next);
	printf("%s\n", (char *)ptr->data);
}

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] || s2[i])
	{
		diff = s1[i] - s2[i];
		i++;
		if (diff != 0)
			return (diff);
	}
	return (diff);
}
