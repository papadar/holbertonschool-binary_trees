#include "binary_trees.h"
#include "14-binary_tree_balance.c"

int binary_tree_balance(const binary_tree_t *tree);

/**
 * binary_tree_is_full - determine if a binary tree is 'full'
 * where both child nodes are equally stacked
 * @tree: the pointed node
 * Return: 1 for full, 0 for not full or null
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *left;
	binary_tree_t *right;

	if (tree == NULL)
		return (0);
	left = tree->left;
	right = tree->right;
	if (left == NULL || right == NULL)
	{
		return (0);
	}
	if (binary_tree_balance(left) != 0 || binary_tree_balance(right) != 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
