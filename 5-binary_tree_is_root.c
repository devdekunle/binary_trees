#include "binary_trees.h"
/**
*binary_tree_is_root - A function that checks if a given node is a root
*@node: pointer to the node to check
*Return: 0 or 1
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	int i;

	if (!node)
		i = (0);

	if (node && node->parent)
		i = (0);
	else
		i = (1);

	return (i);


}

