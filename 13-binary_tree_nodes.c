#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: the number of nodes with at least 1 child, or 0 if tree is NULL
 *
 * Description: A node is counted if it has at least one child. The function
 * recursively counts such nodes in both the left and right subtrees.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t left_count = binary_tree_nodes(tree->left);
    size_t right_count = binary_tree_nodes(tree->right);

    // Count this node if it has at least one child.
    if (tree->left != NULL || tree->right != NULL)
        return (1 + left_count + right_count);
    else
        return (left_count + right_count);
}
