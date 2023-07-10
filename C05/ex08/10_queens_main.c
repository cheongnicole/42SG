/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_queens_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 08:25:43 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/10 08:27:54 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ten_queens_puzzle(void);

int	main(void)
{
	int	result = ft_ten_queens_puzzle();
	printf("%d\n", result);
	return (0);
}
