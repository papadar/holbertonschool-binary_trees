#include "binary_trees.h"

/**
 * binary_tree_size - determine the total nodes 'under' the pointed node
 * @tree: the pointed node
 * Return: total nodes including pointed node or 0 for null
 */

size_t binary_tree_size(const binary_tree_t *tree)
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
			return (1);
		}
		else
		{
			return (1 + binary_tree_size(right));
		}
	}
	if (left != NULL)
	{
		if (right == NULL)
		{
			return (1 + binary_tree_size(left));
		}
		else
		{
			return (1 + binary_tree_size(left) + binary_tree_size(right));
		}
	}
	return (0);
}
