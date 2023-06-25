/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:03:15 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/25 18:08:13 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	is_shorter;
	unsigned int	i;

	i = 0;
	is_shorter = 0;
	while (i < n)
	{
		if (is_shorter || src[i] == '\0')
		{
			is_shorter = 1;
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
