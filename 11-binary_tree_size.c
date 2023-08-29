#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the size.
 * Return: the size of the tree, 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t	left, right;

	if (!tree)
		return (0);
	left = binary_tree_size(tree->left) + 1;
	right = binary_tree_size(tree->right);
	return (left + right);
}
