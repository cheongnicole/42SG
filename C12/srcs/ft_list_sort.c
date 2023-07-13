/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:34:49 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 15:02:59 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	t_list	*i_prev;
	t_list	*i_cur;
	t_list	*j_prev;
	t_list	*j_cur;
	t_list	*j_next;

	if (!*begin_list || !(*begin_list->next))
		return ;
	i_cur = *begin_list;
	j_prev = *begin_list;
	j_cur = *begin_list->next;
	while (i_cur->next)
	{
		j = i + 1;
		while (j_cur)
		{
			if (cmp(i->data, j->data) > 0)
				swap;
			j++;
		}
		i++;
	}
}
