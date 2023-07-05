/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:19:05 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/05 22:33:22 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
void	output_error(int err, char *filename);
void	print_error(char *err_desc, char *err_arg);
int		check_args(int argc, char **argv);
int		file_size(char *filename);
void	print_hex_addr(int buf_pos);
void	print_hex_contents(char *buffer, unsigned int count);
void	print_char_contents(char *buffer, unsigned int count);
void	print_and_advance(char *buffer, int bytes_read, int *buf_pos);
void	print_last_lines(char *buffer, int bytes_read, int *buf_pos);

#endif
