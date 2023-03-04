#include "binary_trees.h"

/**
*binary_tree_balance - get the balance factor of a tree
*@tree: pointer to the root node of the tree to measure the balance factor
*Return 0 or balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right = 0;

	if (!tree)
		return (0);

	left = tree->left ? binary_tree_balance(tree->left) + 1 : 0;
	right = tree->right ? binary_tree_balance(tree->right) + 1 : 0;

	return (left - right);


}
