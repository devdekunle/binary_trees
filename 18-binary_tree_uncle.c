#include "binary_trees.h"

/**
*binary_tree_uncle - finds the uncle of a node
*@node: is a pointer to the node to find the uncle
*Return:
*NULL - if node is NULL and if node has no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->parent->left);
	else if (node == node->parent->right)
		return (node->parent->parent->right);
	else
		return (NULL);


}
