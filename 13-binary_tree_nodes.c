#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: a pointer to the root node of the tree to count the number of nodes.
 * Return: number of nodes with at least 1 child, 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t	left, right;

	left = 0;
	right = 0;
	if (!tree)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
	{
		return (left + right + 1);
	}
	return (left + right);
}
