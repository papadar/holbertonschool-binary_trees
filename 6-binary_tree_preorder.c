#include "binary_trees.h"

/**
 * binary_tree_preorder - navigate a binary tree using pre-order traversal
 * @tree: pointer to a tree node
 * @func: function pointer
 * Return: always void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *left;
	binary_tree_t *right;
	int n;

	if (tree != NULL)
	{
		n = tree->n;
		func(n);

		left = tree->left;
		if (left != NULL)
			binary_tree_preorder(left, func);
		right = tree->right;
		if (right != NULL)
			binary_tree_preorder(right, func);
	}
}
