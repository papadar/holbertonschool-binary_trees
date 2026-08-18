#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire tree
 * @tree: the head of the tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left;
	binary_tree_t *right;

	if (tree != NULL)
	{
		left = tree->left;
		right = tree->right;

		if (left != NULL)
			binary_tree_delete(left);
		if (right != NULL)
			binary_tree_delete(right);

		free(tree);
	}
}
