#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node.
 * @node: a pointer to the node to find the uncle.
 * Return: the uncle of the node, NULL if node is NULL and node has no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->parent->right);
	else if (node->parent->left == node)
		return (node->parent->parent->left);
	return (NULL);
}
