/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_handle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:03:41 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/06 16:13:39 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	read_std_input(void)
{
	char	c;

	while (read(0, &c, 1))
	{
		if (c == '\n')
			break ;
	}
}

void	output_error(int err, char *filename)
{
	if (!err)
		return ;
	write(2, "tail: cannot open '", 19);
	write(2, filename, ft_strlen(filename));
	write(2, "' for reading: ", 15);
	write(2, strerror(err), ft_strlen(strerror(err)));
	write(2, "\n", 1);
}

void	print_error(char *err_desc, char *err_arg)
{
	write(2, "tail: ", 6);
	write(2, err_desc, ft_strlen(err_desc));
	write(2, ": ", 2);
	write(2, err_arg, ft_strlen(err_arg));
	write(2, "\n", 1);
}
