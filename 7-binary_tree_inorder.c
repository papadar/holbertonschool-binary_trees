#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses in order, calling a function for each node
 * @tree: pointer to the root node
 * @func: pointer to the function to pass to each node
 * Return: always void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *left;
	binary_tree_t *right;
	int n;

	if (tree != NULL && func != NULL)
	{
		left = tree->left;
		if (left != NULL)
			binary_tree_inorder(left, func);
		n = tree->n;
		func(n);
		right = tree->right;
		if (right != NULL)
			binary_tree_inorder(right, func);
	}
}
