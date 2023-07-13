/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheong <ncheong@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:59:52 by ncheong           #+#    #+#             */
/*   Updated: 2023/07/13 19:15:38 by ncheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*new;

	new = (t_btree *)malloc(sizeof(t_btree));
	if (new)
	{
		new->item = item;
		new->left = NULL;
		new->right = NULL;
	}
	return (new);
}
