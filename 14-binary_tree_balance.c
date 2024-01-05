#include "binary_trees.h"

/**
 * my_binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 */
size_t my_binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			height_left = tree->left ? 1 + my_binary_tree_height(tree->left) : 1;
			height_right = tree->right ? 1 + my_binary_tree_height(tree->right) : 1;
		}
		return (height_left > height_right ? height_left : height_right);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)my_binary_tree_height(tree->left));
		right = ((int)my_binary_tree_height(tree->right));
		total = left - right;
	}
	return (total);
}
