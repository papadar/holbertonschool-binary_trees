#include "binary_trees.h"
#include "9-binary_tree_height.c"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - determine if a binary tree is full and symmetrical
 * where both child nodes are equally stacked
 * @tree: the pointed node
 * Return: 1 for perfect, 0 imperfect or null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left;
	binary_tree_t *right;

	if (tree == NULL)
		return (0);
	left = tree->left;
	right = tree->right;
	if (left == NULL && right == NULL)
		return (1);
	else if (left == NULL || right == NULL)
		return (0);
	else if (binary_tree_is_perfect(left) == 0
			|| binary_tree_is_perfect(right) == 0)
		return (0);
	else if (binary_tree_height(left) == binary_tree_height(right))
		return (1);
	else
		return (0);
}
