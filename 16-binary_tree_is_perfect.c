#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
*binary_tree_is_perfect - check if the binary tree is full
*for a binary tree to be perfect, all parent/internal nodes have exactly
*two child nodes and all leave nodes are on the same level.
*@tree: pointer to the root node of the tree to check
*Return: 0 or 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)pow_recursion(2, height + 1);
	return (power - 1 == nodes);

}

/**
*pow_recursion - returns the value of x raised to the power of y
*@x: the value to exponentiate
*@y: the power to raise x to
*Return: x to the power of y, or -1 if y is negative
*/
int pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	else
		return (x * pow_recursion(x, y - 1));

}
