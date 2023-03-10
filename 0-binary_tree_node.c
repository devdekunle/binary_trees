#include "binary_trees.h"

/**
*binary_tree_node - Function that creates a binary tree node
*@parent: parent node of the tree
*@value: value to be inserted
*Return: pointer to new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	/*set parent of new node*/
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
