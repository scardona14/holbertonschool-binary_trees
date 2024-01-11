#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes with at least 1 child, or 0 if tree is NULL
 *
 * Description: A node is counted if it has at least one child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t count = 0;

    if (tree->left != NULL || tree->right != NULL)
        count = 1;  // Node has at least one child

    return (count + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
