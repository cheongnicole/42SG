/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:05:31 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 21:28:52 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void print_item(void *item)
{
	write(1, (char *)item, 1);
}

int	main(void)
{
	t_btree *root;
	int item[] = {'F', 'D', 'J', 'B', 'E', 'G', 'K', 'A', 'C', 'I'};
	root = btree_create_node(&item[0]);
	btree_insert_node(&root, &item[1]);
	btree_insert_node(&root, &item[2]);
	btree_insert_node(&root, &item[3]);
	btree_insert_node(&root, &item[4]);
	btree_insert_node(&root, &item[5]);
	btree_insert_node(&root, &item[6]);
	btree_insert_node(&root, &item[7]);
	btree_insert_node(&root, &item[8]);
	btree_insert_node(&root, &item[9]);

	btree_apply_prefix(root, print_item);
	write(1, "\n", 1);
	btree_apply_infix(root, print_item);
	write(1, "\n", 1);
	btree_apply_suffix(root, print_item);
	write(1, "\n", 1);
	return (0);
}
