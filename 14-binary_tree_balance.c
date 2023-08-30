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
		left = binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right = binary_tree_height(tree->right);
	}
	if (left >= right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 * Return: balance factor of a binary tree, 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int	left, right;

	if (!tree)
		return (0);
	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);
	return (left - right);
}
