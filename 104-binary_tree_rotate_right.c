#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree.
 * @tree: a pointer to the root node of the tree to rotate.
 * Return: a pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t	*new;

	if (!tree || !tree->left)
		return (NULL);
	new = tree->left;
	tree->left = new->right;
	new->right = tree;
	if (tree->left != NULL)
		tree->left->parent = tree;
	new->parent = tree->parent;
	tree->parent = new;
	return (new);
}
