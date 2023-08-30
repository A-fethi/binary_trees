#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node.
 * @node: a pointer to the node to find the sibling.
 * Return: the sibling of the node,
 * NULL if node or the parent is NULL or node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else if (node->parent->left == node)
		return (node->parent->right);
	return (NULL);
}
