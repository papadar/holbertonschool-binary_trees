#include "binary_trees.h"

/**
 * binary_tree_depth - determine how many parent nodes the pointed node has
 * @tree: the node to analyse
 * Return: size_t the number of nodes or 0 if null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *parent;

	if (tree != NULL)
	{
		parent = tree->parent;
		if (parent != NULL)
			return (1 + binary_tree_depth(parent));
		else
			return (0);
	}
	return (0);
}
