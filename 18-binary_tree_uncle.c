#include "binary_trees.h"

/**
 * binary_tree_uncle - recover a pointer to my auntie node
 * @node: pointer to a binary tree node
 * Return: pointer to my auntie node or null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gg;
	binary_tree_t *mochi;

	if (node == NULL)
		return (node);
	mochi = node->parent;
	if (mochi == NULL)
		return (mochi);
	gg = mochi->parent;
	if (gg == NULL)
		return (gg);
	if (mochi == gg->left)
		return (gg->right);
	if (mochi == gg->right)
		return (gg->left);
	return (NULL);
}
