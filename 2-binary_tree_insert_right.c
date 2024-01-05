#include "binary_trees.h"
/**
* binary_tree_insert_right - Inserts a node as the right child
*
* @parent: A pointer to the parent node of node to insert the right child
* @value:  value to store in the new node
*
* Return: pointer to new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);

	if (right_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}

	parent->right = right_node;

	return (right_node);
}
