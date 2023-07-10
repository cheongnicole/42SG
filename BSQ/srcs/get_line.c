/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:58:38 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/10 13:43:53 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// reads each line from the map
static char	*add_letter(char *str, char c)
{
	int		i;
	char	*new;

	new = (char *)malloc((ft_strlen(str) + 2) * sizeof(char));
	if (!new)
	{
		if (str)
			free(str);
		return (NULL);
	}
	i = 0;
	if (str)
	{
		while (str[i])
		{
			new[i] = str[i];
			i++;
		}
	}
	if (str)
		free(str);
	new[i++] = c;
	new[i] = '\0';
	return (new);
}

char	*get_line(int fd)
{
	char	c;
	char	*line;

	c = '*';
	line = NULL;
	while (c != '\n' && read(fd, &c, 1) > 0 && c)
	{
		line = add_letter(line, c);
		if (!line)
			return (NULL);
	}
	return (line);
}
