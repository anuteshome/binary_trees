#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to count
 * the number of leaves
 *
 * Return: the number of leaves the node contains, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lf, rf;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lf = binary_tree_leaves(tree->left);
	rf = binary_tree_leaves(tree->right);
	return (lf + rf);
}
