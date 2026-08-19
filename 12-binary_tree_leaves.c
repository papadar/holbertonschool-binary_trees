#include "binary_trees.h"

/**
 * binary_tree_leaves - determine the total leaf nodes 'under' the pointed node
 * @tree: the pointed node
 * Return: total leaf nodes or 0 for null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
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
			return (binary_tree_leaves(right));
		}
	}
	if (left != NULL)
	{
		if (right == NULL)
		{
			return (binary_tree_leaves(left));
		}
		else
		{
			return (binary_tree_leaves(left) + binary_tree_leaves(right));
		}
	}
	return (1);
}
