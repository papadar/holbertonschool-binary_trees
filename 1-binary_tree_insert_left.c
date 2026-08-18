#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds a node to the 'left' branch of a parent
 * @parent: the parent node to attach to
 * @value: the data to store
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	binary_tree_t *spot;

	if (!node)
		return (NULL);
	if (!parent)
		return (NULL);

	spot = parent->left;
	node->n = value;
	node->right = NULL;
	node->parent = parent;
	parent->left = node;

	if (spot == NULL)
	{
		node->left = NULL;
	}
	else
	{
		node->left = spot;
		spot->parent = node;
	}
	return (node);
}
