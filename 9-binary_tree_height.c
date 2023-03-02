#include "binary_trees.h"

/**
*binary_tree_height - measure the height of a tree
*@tree: pointer to tree
*Return: 0 or 1
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;
	size_t left = 0;
	size_t right = 0;

	if (!tree)
	return (0);
	if (tree->left)

		left = binary_tree_height(tree->left) + 1;
	else
		left = 0;
	if (tree->right)

		right = binary_tree_height(tree->right) + 1;
	else
		right = 0;
	if (left > right)
		height = left;
	else
		height = right;
	return (height);
}
