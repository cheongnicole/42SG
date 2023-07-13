/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:01:05 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 12:37:30 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

// ft_utils
void	print_list(t_list *ptr);
void	print_list_recur(t_list *ptr);
void	print_list_recur_reverse(t_list *ptr);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(const char *s1, const char *s2);

// ex00
t_list	*ft_create_elem(void *data);
// ex01
void	ft_list_push_front(t_list **begin_list, void *data);
// ex02
int		ft_list_size(t_list *begin_list);
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
// ex08
void	ft_list_reverse(t_list **begin_list);
// ex09
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
// ex10
void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)(void *, void*));
int cmp(void *, void *);
// ex11
t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
// ex12
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));
// ex13
void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);
// ex14
void	ft_list_sort(t_list **begin_list, int (*cmp)());
// ex15
void	ft_list_reverse_fun(t_list *begin_list);
// ex16
void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());
// ex17
void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)());

#endif
