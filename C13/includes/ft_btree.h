#ifndef FT_BTREE_H
# define FT_BTREE_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_btree
{
	struct s_btree *left;
	struct s_btree *right;
	void *item;
} t_btree;

t_btree *btree_create_node(void *item);
void    btree_insert_node(t_btree **root, void *item);
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void	btree_apply_infix(t_btree *root, void (*applyf)(void *));
void	btree_apply_suffix(t_btree *root, void (*applyf)(void *));

#endif
