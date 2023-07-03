/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:06:41 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/03 15:16:05 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[5];
	char	**my_strings;
	char	*join;

	strs[0] = "This ";
	strs[1] = "is ";
	strs[2] = "my ";
	strs[3] = "joined ";
	strs[4] = "string!";
	my_strings = (char **)strs;
	join = ft_strjoin(5, my_strings, "UwU ");
	printf("%s\n", join);
	free(join);
	return (0);
}
