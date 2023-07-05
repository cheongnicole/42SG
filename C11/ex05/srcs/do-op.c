/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 00:07:31 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/06 00:15:49 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[2] != "+-/*/")
}

The progam will be executed with three arguments: do-op value1 operateur
value2
• Example :
$>./do-op 42 "+" 21
63
$>
• You should use an array of pointers to function to take care of the operator.
• In case of an invalid operator your program should print 0.
• If the number of arguments is invalid, do-op doesn’t display anything.
• Your program should accept and print the result for the following operators: ’+’ ’-’
’/’ ’*’ and ’%’
• Your program should treat value as int.
• In case of a division by 0, it should print:
Stop : division by zero
• In case of a modulo by 0, it should print:
Stop : modulo by zero

$> make clean
$> make
$> ./do-op
$> ./do-op 1 + 1
2
$> ./do-op 42amis - --+-20toto12
62
$> ./do-op 1 p 1
0
$> ./do-op 1 + toto3
1
$>
$> ./do-op toto3 + 4
4
$> ./do-op foo plus bar
0
$> ./do-op 25 / 0
Stop : division by zero
$> ./do-op 25 % 0
Stop : modulo by zero
$>
