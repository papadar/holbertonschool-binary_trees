#include "binary_trees.h"
#include "9-binary_tree_height.c"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - determine how balanced a binary tree is
 * @tree: the pointed node
 * Return: positive value for greater 'left' depth, negative for 'right'
 * 0 if equal, or null node
 */

int binary_tree_balance(const binary_tree_t *tree)
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
			return ((binary_tree_height(right) * -1) - 1);
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
			return (binary_tree_height(left) - binary_tree_height(right));
		}
	}
	return (0);
}
