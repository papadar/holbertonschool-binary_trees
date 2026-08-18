#include "binary_trees.h"

/**
 * binary_tree_is_root - determine if pointed node is root of a tree
 * @node: the pointed node
 * Return: 1 if root, 0 if not or null
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (0);
	parent = node->parent;
	if (parent == NULL)
		return (1);
	return (0);
}
