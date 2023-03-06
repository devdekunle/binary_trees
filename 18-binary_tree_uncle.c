#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
*binary_tree_uncle - finds the uncle of a node
*@node: is a pointer to the node to find the uncle
*Return:
*NULL - if node is NULL and if node has no uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->right)
		return (binary_tree_sibling(node->parent));

	else
		return (binary_tree_sibling(node->parent));


}
