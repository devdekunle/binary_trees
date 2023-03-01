#include "binary_trees.h"

/**
*binary_tree_is_leaf - checks if a node is a leaf
*@node: pointer to the node to check
*Return: 1 or 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int i;

	if (!node)
		i = 0;
	if (node && (node->left || node->right))
		i = 0;
	else if (node && (node->right == NULL || node->left == NULL))
		i = 1;
	return (i);
}
