/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:01:05 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/11 18:35:03 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <stddef.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

// ex00
t_list	*ft_create_elem(void *data);
// ex01
void	ft_list_push_front(t_list **begin_list, void *data);
// ex02
int	ft_list_size(t_list *begin_list);
// ex03
t_list	*ft_list_last(t_list *begin_list);
// ex04
void	ft_list_push_back(t_list **begin_list, void *data);
// ex05
t_list	*ft_list_push_strs(int size, char **strs);
// ex06
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
// ex07
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

#endif
