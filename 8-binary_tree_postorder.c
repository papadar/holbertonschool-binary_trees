#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses postorder calling a function 4 each node
 * @tree: pointer to the root node
 * @func: pointer to the function to pass to each node
 * Return: always void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *left;
	binary_tree_t *right;
	int n;

	if (tree != NULL && func != NULL)
	{
		left = tree->left;
		if (left != NULL)
			binary_tree_postorder(left, func);
		right = tree->right;
		if (right != NULL)
			binary_tree_postorder(right, func);
		n = tree->n;
		func(n);
	}
}
