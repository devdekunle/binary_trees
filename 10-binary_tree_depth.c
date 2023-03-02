#include "binary_trees.h"

/**
*binary_tree_depth - measure the depth of a tree
*@tree: pointer to tree
*Return: 0 or 1
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);

}
