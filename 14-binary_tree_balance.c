#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
*binary_tree_balance - get the balance factor of a tree
*@tree: pointer to the root node of the tree to measure the balance factor
*Return: 0 or balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = tree->left ? (int)binary_tree_height(tree->left) : -1;
	right = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (left - right);

}
