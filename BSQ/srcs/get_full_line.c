/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_full_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:38:20 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/10 13:42:10 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// reads full line from fd
char	*get_full_line(int fd, int size)
{
	char	*line;

	line = (char *)malloc((size + 1) * sizeof(char));
	if (!line)
		return (NULL);
	read(fd, line, size);
	line[size] = '\0';
	return (line);
}
