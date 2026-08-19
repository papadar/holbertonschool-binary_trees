#include "binary_trees.h"

/**
 * binary_tree_sibling - recovera pointer to my sibling node
 * @node: pointer to a bibary tree node
 * Return: pointer to my sibling node or null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *left;
	binary_tree_t *right;

	if (node == NULL)
		return (node);
	parent = node->parent;
	if (parent == NULL)
		return (parent);
	left = parent->left;
	right = parent->right;
	if (node == left)
		return (right);
	if (node == right)
		return (left);
	return(NULL);
}
