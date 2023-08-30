#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: the height of the tree or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t	left, right;

	left = 0;
	right = 0;
	if (!tree)
		return (0);
	if (tree->left != NULL)
	{
		left = binary_tree_height(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		right = binary_tree_height(tree->right) + 1;
	}
	if (left >= right)
		return (left);
	return (right);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: a pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 if not or tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t	left, right;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left == right);
}
