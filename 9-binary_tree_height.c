#include "binary_trees.h"

/**
 * binary_tree_height - retrun the number of nodes below the *node
 * @tree: the pointed node
 * Return: the number of nodes or 0 if node is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
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
			return (1 + binary_tree_height(right));
		}
	}
	if (left != NULL)
	{
		if (right == NULL)
		{
			return (1 + binary_tree_height(left));
		}
		else
		{
			if (binary_tree_height(left) > binary_tree_height(right))
			{
				return (1 + binary_tree_height(left));
			}
			else
			{
				return (1 + binary_tree_height(right));
			}
		}
	}
	return (0);
}
