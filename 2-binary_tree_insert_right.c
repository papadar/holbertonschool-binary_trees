#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a node to the 'right' branch of a parent
 * @parent: the parent node to attach to
 * @value: the data to store
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	binary_tree_t *spot;

	if (!node)
		return (NULL);
	if (!parent)
	{
		free(node);
		return (NULL);
	}
	spot = parent->right;
	node->n = value;
	node->left = NULL;
	node->parent = parent;
	parent->right = node;

	if (spot == NULL)
	{
		node->right = NULL;
	}
	else
	{
		node->right = spot;
		spot->parent = node;
	}
	return (node);
}
