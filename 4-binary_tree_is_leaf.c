#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: pointer to the node to check
 *
 * Return: 1 if true, 0 on false
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
