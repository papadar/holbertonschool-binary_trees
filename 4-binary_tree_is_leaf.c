#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if the pointed node is a leaf node
 * @node: pointer to the node to check
 * Return: 1 if a leaf, 0 if NULL or not leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	binary_tree_t *left;
	binary_tree_t *right;

	if (node == NULL)
		return (0);
	left = node->left;
	right = node->right;
	if (left == NULL && right == NULL)
		return (1);
	return (0);
}
