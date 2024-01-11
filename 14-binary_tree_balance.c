#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	size_t height_l = binary_tree_height(tree->left) + 1;
	size_t height_r = binary_tree_height(tree->right) + 1;

	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

size_t height_l = binary_tree_height(tree->left);
size_t height_r = binary_tree_height(tree->right);

return (height_l - height_r);
}
