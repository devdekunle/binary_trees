#include "binary_trees.h"

/**
*binary_tree_is_full - check if the binary tree is full
*for a binary tree to be full, all parent/interior node must have one or
*zero children
*@tree: pointer to the root node of the tree to check
*Return: 0 or 1
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int val_left, val_right;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);

		if (tree->left && tree->right)
		{
			val_left = binary_tree_is_full(tree->left);
			val_right = binary_tree_is_full(tree->right);
			return (val_left && val_right);
		}

		return (0);
	}

	return (0);
}
