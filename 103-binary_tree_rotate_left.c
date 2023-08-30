#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree.
 * @tree: a pointer to the root node of the tree to rotate.
 * Return: a pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t	*new;

	new = tree->right;
	tree->right = new->left;
	new->left = tree;
	if (tree->right != NULL)
		tree->right->parent = tree;
	new->parent = tree->parent;
	tree->parent = new;
	return (new);
}
