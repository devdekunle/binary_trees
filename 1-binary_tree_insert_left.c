#include "binary_trees.h"

/**
*binary_tree_insert_left - Insert a node as the left child of another node
*@parent: pointer to the node to insert the left-child in
*@value: value to store in the new node
*Return: a pointer to the  new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	if (!parent)
		return (NULL);
	/*create a new node as the left child of parent*/
	new_node->left = binary_tree_node(parent, value);
	if (parent->left)
	{
		/*if parent has left child, set it to new node and*/
		temp = parent->left;
		parent->left = new_node->left;
		/* set left child of newly created node to old node of parent's */
		/*left child */
		parent->left->left = binary_tree_node(new_node->left, temp->n);
	}
	else
	{
		parent->left = new_node->left;
	}

	return (new_node->left);

}
