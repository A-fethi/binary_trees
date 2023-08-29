#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the depth.
 * Return: the depth of the tree or 0 if tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t	depth;

	depth = 0;
	if (!tree)
		return (0);
	if (tree->parent != NULL)
	{
		depth = binary_tree_depth(tree->parent) + 1;
	}
	return (depth);
}
