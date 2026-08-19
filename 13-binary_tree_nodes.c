#include "binary_trees.h"

/**
 * binary_tree_nodes - determine the total nodes 'under' the pointed node
 * with at least one child connection
 * @tree: the pointed node
 * Return: total nodes with children or 0 for null
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	binary_tree_t *left;
	binary_tree_t *right;

	if (tree == NULL)
		return (0);
	left = tree->left;
	right = tree->right;
	if (left == NULL)
	{
		if (right == NULL)
		{
			return (0);
		}
		else
		{
			return (1 + binary_tree_nodes(right));
		}
	}
	if (left != NULL)
	{
		if (right == NULL)
		{
			return (1 + binary_tree_nodes(left));
		}
		else
		{
			return (1 + binary_tree_nodes(left) + binary_tree_nodes(right));
		}
	}
	return (0);
}
