/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 00:07:31 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/06 06:53:12 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

// program accept and print the result for these operators:
// ’+’ ’-’ ’/’ ’*’ and ’%’
// remember to run multiply with "*" or '*'
int	check_operator(char *input)
{
	if (ft_strcmp(input, "+") == 0)
		return (1);
	if (ft_strcmp(input, "-") == 0)
		return (2);
	if (ft_strcmp(input, "*") == 0)
		return (3);
	if (ft_strcmp(input, "/") == 0)
		return (4);
	if (ft_strcmp(input, "%") == 0)
		return (5);
	return (0);
}

void	do_op(int val1, int val2, int op, void (*f[5])(int, int))
{
	f[op - 1](val1, val2);
}

int	main(int argc, char **argv)
{
	int		val1;
	int		val2;
	int		op;
	void	(*f[5])(int, int);

	if (argc != 4)
		return (0);
	op = check_operator(argv[2]);
	if (!op)
	{
		ft_putstr("0\n");
		return (0);
	}
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	f[0] = &op_add;
	f[1] = &op_sub;
	f[2] = &op_mul;
	f[3] = &op_div;
	f[4] = &op_mod;
	do_op(val1, val2, op, f);
	return (0);
}
