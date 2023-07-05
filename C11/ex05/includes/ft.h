/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:19:05 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/06 06:51:59 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_putlnbr(long lnbr);
void	ft_putchar(char c);
void	op_add(int val1, int val2);
void	op_sub(int val1, int val2);
void	op_mul(int val1, int val2);
void	op_div(int val1, int val2);
void	op_mod(int val1, int val2);

#endif
