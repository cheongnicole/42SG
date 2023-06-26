/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:52:13 by ncheong           #+#    #+#             */
/*   Updated: 2023/06/26 13:56:18 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	src[128] = "Bonjour les aminches\t\n\tc\007 est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \00";
	ft_print_memory(src, 92);
	return (0);
}
