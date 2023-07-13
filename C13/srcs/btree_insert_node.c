/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:17:12 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 21:17:20 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_node(t_btree **root, void *item)
{
	if (*root == NULL)
		*root = btree_create_node(item);
	else if (*(int *)item <= *(int *)((*root)->item))
		btree_insert_node(&((*root)->left), item);
	else
		btree_insert_node(&((*root)->right), item);
}
